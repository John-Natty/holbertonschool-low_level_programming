# C - Variadic Functions

## Description

This project introduces **variadic functions in C**.  
A variadic function is a function that can accept a **variable number of arguments**.

To achieve this, the project uses the macros defined in the **stdarg.h** library:

- `va_start`
- `va_arg`
- `va_end`

These macros allow a function to access arguments passed after the last named parameter.

A common example of a variadic function in C is `printf`.

---

## Learning Objectives

At the end of this project, you should be able to explain:

- What variadic functions are
- How to use `va_start`, `va_arg`, and `va_end`
- Why and how to use the `const` type qualifier

---

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- All files compiled on **Ubuntu 20.04 LTS**
- Compilation with:
