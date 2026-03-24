# Valgrind Analysis

## Introduction

Valgrind reports memory issues that correspond to incorrect use of memory.
Each warning is linked to a specific violation of memory lifetime or ownership.

This document connects Valgrind output to concrete memory behavior observed
in the programs.

## stack_example.c

### Valgrind result

No errors reported.

HEAP SUMMARY:
All heap blocks were freed -- no leaks are possible.

### Type of issue

No memory errors.

### Explanation

The program only uses stack memory.

All variables:
- local_int
- local_buf
- marker
- p_local

exist only inside function stack frames.

No malloc is used, therefore:
- no leaks
- no invalid read/write

Memory is automatically released when functions return.

## heap_example.c

### Valgrind result

definitely lost: 6 bytes in 1 blocks

Valgrind reports a memory leak.

### Type of issue

Memory leak due to lost ownership.

### Memory object involved

alice->name allocation

### Explanation

person_new allocates two memory blocks:

1. Person structure
2. name string

bob is correctly freed:

free(bob->name);
free(bob);

alice is partially freed:

person_free_partial(alice);

This function only calls:

free(p);

The memory allocated for alice->name is never freed.

After the Person structure is freed, the pointer to the string is lost.

Result:
the allocation remains in memory but cannot be accessed.

Valgrind reports this block as "definitely lost".

## aliasing_example.c

### Valgrind result

Invalid read of size 4
Invalid write of size 4

### Type of issue

Use-after-free caused by pointer aliasing.

### Memory object involved

array allocated in make_numbers

### Explanation

make_numbers allocates an array on the heap.

a receives the address of the array.

b = a creates an alias:
both pointers reference the same allocation.

free(a) releases the memory.

b still contains the same address but the allocation lifetime has ended.

Accessing:

b[2]
b[3] = 1234

produces:
- invalid read
- invalid write

This is a use-after-free error caused by aliasing.

## crash_example.c

### Valgrind result

Invalid write of size 4
Address 0x0 is not stack'd, malloc'd or free'd

Program terminates with SIGSEGV.

### Type of issue

NULL pointer dereference.

### Memory object involved

nums pointer

### Explanation

allocate_numbers returns NULL because n = 0.

nums receives NULL:

nums = NULL

The program attempts:

nums[0] = 42;

nums[0] dereferences a NULL pointer.

NULL does not reference valid memory.

Writing to address 0x0 causes segmentation fault.

## AI review and correction example

AI assumption:
freeing a structure also frees nested allocations.

Why incorrect:
the name field is stored in a separate heap allocation.

free(p) only releases the Person structure memory.

The string allocation remains allocated.

Correct reasoning:
nested allocations must be freed explicitly before freeing the parent structure.

## Conclusion

Valgrind warnings correspond directly to incorrect memory lifetime management.

Observed issues include:

- memory leak caused by missing free
- use-after-free caused by pointer aliasing
- NULL dereference causing segmentation fault
- correct stack usage producing no errors

Understanding memory ownership and lifetime allows precise interpretation
of Valgrind diagnostics.