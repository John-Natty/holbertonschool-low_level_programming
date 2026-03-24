# Memory Maps Analysis

## Introduction

This document analyzes how memory behaves in several C programs.
Each analysis distinguishes stack memory from heap memory and tracks:

- stack frames and local variables
- heap allocations and deallocations
- pointer aliasing
- object lifetimes
- causes of memory errors

## 1. stack_example.c

### Program purpose

Demonstrates how stack frames behave during recursion.
Each function call creates its own local variables on the stack.

No heap allocation occurs in this program.

### Key execution points

1. main calls walk_stack
2. walk_stack calls itself recursively
3. dump_frame shows local variables at each depth
4. stack frames are created and destroyed during recursion

### Memory map

Each recursive call creates a new stack frame containing:

STACK
- marker
- local_int
- local_buf
- p_local → points to local_int

HEAP
- empty

Stack grows with recursion depth and shrinks when functions return.

### Lifetime notes

- local variables exist only during function execution
- each recursive call has independent variables
- no heap memory is used

## 2. heap_example.c

### Program purpose

Shows heap allocation inside a structure and demonstrates a memory leak
caused by partial deallocation.

Each Person requires two allocations:
1. structure allocation
2. string allocation for name

### Key execution points

1. alice is allocated
2. bob is allocated
3. bob is fully freed
4. alice is partially freed
5. alice->name remains allocated → leak

### Memory map

After creation of both persons:

STACK
- alice → Person structure
- bob → Person structure

HEAP
Person alice
    name → "Alice"

Person bob
    name → "Bob"

After freeing bob:

HEAP
Person alice
    name → "Alice"

After person_free_partial(alice):

HEAP
"Alice" still allocated → memory leak

### Lifetime notes

- each Person uses two heap allocations
- freeing the structure does not free nested allocations
- alice->name remains allocated and becomes unreachable

## 3. aliasing_example.c

### Program purpose

Demonstrates pointer aliasing and use-after-free.

Two pointers reference the same heap allocation.
Freeing memory through one pointer invalidates the other.

### Key execution points

1. array allocated on heap
2. b = a creates alias
3. free(a) invalidates both pointers
4. access through b causes invalid read and write

### Memory map

After allocation:

STACK
- a → array
- b = NULL

HEAP
array of 5 integers

After aliasing:

STACK
- a → array
- b → same array

After free(a):

STACK
- a dangling pointer
- b dangling pointer

HEAP
memory freed

Access through b causes use-after-free.

### Lifetime notes

- only one allocation exists
- a and b reference the same memory
- freeing memory invalidates all aliases

## 4. crash_example.c

### Program purpose

Demonstrates segmentation fault caused by NULL dereference.

### Key execution points

1. n = 0
2. allocate_numbers returns NULL
3. nums receives NULL
4. nums[0] causes invalid memory access

### Memory map

STACK
- nums = NULL
- n = 0

HEAP
- empty

nums[0] attempts to access NULL address → segmentation fault.

### Lifetime notes

- no allocation occurs
- NULL means no valid memory
- dereferencing NULL causes crash


## AI review and correction example

AI assumption:
freeing a structure also frees nested allocations.

Correction:
free only releases the exact memory block passed as argument.
Nested allocations must be freed explicitly.

Failure to free nested allocations results in memory leaks.

## Conclusion

These programs demonstrate:

- difference between stack and heap memory
- lifetime of local variables
- aliasing between pointers
- risks of use-after-free
- importance of freeing nested allocations
- causes of segmentation faults

Explicit reasoning about memory helps detect leaks, invalid accesses, and crashes.