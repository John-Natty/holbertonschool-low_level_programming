C - File I/O  
Description

This project introduces low-level file manipulation in C using POSIX system calls.  
Instead of using standard library functions like printf or fopen, we directly interact with the operating system using:

open  
read  
write  
close  

The goal is to understand how programs communicate with the system to handle files.

This project focuses on:

file descriptors  
system calls  
file permissions  
error handling  
memory management  
Learning Objectives  

At the end of this project, you should be able to explain:

What file descriptors are  
The 3 standard file descriptors and their POSIX names:  
STDIN_FILENO  
STDOUT_FILENO  
STDERR_FILENO  
How to use the system calls:  
open  
read  
write  
close  
The difference between a function and a system call  
How to use flags:  
O_RDONLY  
O_WRONLY  
O_RDWR  
What file permissions are and how to set them  
How to handle errors when working with files  
Requirements  
Allowed editors:  
vi  
vim  
emacs  
Compilation environment:  
Ubuntu 20.04 LTS  
gcc

Compilation flags:

gcc -Wall -Werror -Wextra -pedantic -std=gnu89

Rules:

All files must end with a new line  
Code must follow Betty style  
No global variables allowed  
Maximum of 5 functions per file  
All prototypes must be in main.h  
Header files must be include guarded  
Allowed functions and system calls  
Allowed system calls  
read  
write  
open  
close  
Allowed standard library functions  
malloc  
free  
exit  
Allowed custom function  
_putchar  
Forbidden functions  
printf  
puts  
calloc  
realloc  
fprintf  
etc...