# C - malloc, free

## Description

This project introduces **dynamic memory allocation in C** using `malloc` and `free`.  
It focuses on understanding how memory works in the heap and how to properly allocate and release memory during program execution.  

Managing memory manually is a fundamental skill in C programming and is essential to avoid issues such as **memory leaks**, **dangling pointers**, and **segmentation faults**.

---

## Learning Objectives

At the end of this project, you should be able to explain:

* The difference between **automatic and dynamic allocation**  
* What `malloc` and `free` are and how to use them  
* Why and when to use **dynamic memory allocation**  
* How to detect memory leaks using **Valgrind**  

---

## Concepts

### Automatic Allocation

Memory allocated automatically when a function is called and released when the function ends.

Example:

```c  
int x = 10;  
```

### Dynamic Allocation

Memory allocated manually in the **heap** using `malloc` and released using `free`.

Example:

```c  
int *ptr = malloc(sizeof(int));  
free(ptr);  
```  

---

## Requirements

* Allowed editors: `vi`, `vim`, `emacs`  
* All files compiled on **Ubuntu 20.04 LTS**  
* Compilation command:

```bash  
gcc -Wall -Werror -Wextra -pedantic -std=gnu89  
```

* All files must end with a **new line**  
* Code must follow **Betty style**  
* No **global variables**  
* Maximum **5 functions per file**  

---

## Forbidden Functions

The following functions are **not allowed**:

* `printf`  
* `puts`  
* `calloc`  
* `realloc`  

---

## Allowed Functions

* `malloc`  
* `free`  
* `_putchar`  

---

## Memory Checking

To check memory leaks:

```bash  
valgrind ./program_name  
```

Valgrind helps detect:

* memory leaks  
* invalid reads  
* invalid writes  
