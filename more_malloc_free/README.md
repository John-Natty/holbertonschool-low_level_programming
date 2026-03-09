# C - More malloc, free

##  Description

This project is part of the **Holberton School curriculum** and focuses on advanced dynamic memory allocation in the C programming language.

The objective is to deepen the understanding of memory management using functions such as:

* `malloc`  
* `free`  
* `exit`  

In this project, we also recreate behaviors similar to the standard library functions:

* `calloc`  
* `realloc`  

This helps understand how memory allocation works internally.

---

##  Learning Objectives

At the end of this project, you should be able to explain:

* How to use the `exit` function  
* What the functions `calloc` and `realloc` do  
* How dynamic memory allocation works  
* How to safely manage memory in C  
* How to handle allocation errors properly  

---

##  Requirements

* Allowed editors: `vi`, `vim`, `emacs`  
* Compilation on **Ubuntu 20.04 LTS**  
* Compiler: `gcc`  
* Compilation flags:  

```  
gcc -Wall -Werror -Wextra -pedantic -std=gnu89  
```

### Code Style 

All code must follow the **Betty style guidelines**.

Checked using:

```  
betty-style.pl  
betty-doc.pl  
```

---

##  Project Structure

| File               | Description                                                            |  
| ------------------ | ---------------------------------------------------------------------- |  
| `main.h`           | Header file containing all function prototypes                         |  
| `_calloc.c`        | Function that allocates memory for an array and initializes it to zero |  
| `_realloc.c`       | Function that reallocates a memory block                               |  
| `malloc_checked.c` | Function that allocates memory and exits on failure                    |  
| `string_nconcat.c` | Function that concatenates two strings                                 |  
| `array_range.c`    | Function that creates an array of integers                             |  

---

##  Allowed Functions

The following standard library functions are allowed:

* `malloc`  
* `free`  
* `exit`  

You may also use:

* `_putchar`

---

##  Forbidden Functions

The following functions are **not allowed** in this project:

* `printf`  
* `puts`  
* `calloc`  
* `realloc`

