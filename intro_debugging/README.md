Introduction and Context  

Programs that compile successfully can still be wrong. In C, many mistakes are not syntax errors but logic errors: loops that run one time too many (or too few), variables that change when they shouldn’t, or values that are never reset.  

Debugging is the systematic process of finding and fixing these problems. Instead of guessing or rewriting code blindly, effective debugging relies on tracing execution step by step and observing how the program’s state changes over time.  

In this project, you will use Python Tutor’s C visualizer to debug small C programs. The tool allows you to execute code one line at a time and inspect:  

variable values,  
loop iterations,  
function calls and returns,  
control flow through conditionals.  
The goal is not only to fix the code, but to understand exactly why it was wrong and how the correction changes the program’s behavior.  

Learning Objectives  
By completing this project, you will be able to:  

Explain what debugging is and why step-by-step tracing is necessary.  

Use Python Tutor to:  

execute C code line by line,  
inspect variable values at each step,  
follow loop and nested loop execution,  
observe how functions are called and return values.  
Identify and fix common logic errors involving:  

off-by-one loop conditions,  
incorrect loop control variables,  
improper variable updates,  
incorrect use of function return values.  
Submit corrected C programs that compile cleanly and produce the expected output.  

Resources  
Python Tutor – C Visualizer https://pythontutor.com/c.html  

Python Tutor – Tool overview https://pythontutor.com/  

Project Requirements  
These rules apply to all tasks:  

You may only use:  

variables  
if / else  
loops (for, while)  
nested loops  
functions  

You may not use:  

pointers  
arrays  
structs  
dynamic memory  
file I/O  
Your code must compile with:  

gcc -Wall -Wextra -Werror -pedantic -std=gnu89  
Output must match exactly, including spaces and newlines.  
The checker will compile and run your submitted code independently.  
Submission  
Submit the corrected .c file for each task.  
Do not add extra output.  
Do not change function names or file names.  
Important: If you fix the code without using step-by-step tracing, you are skipping the core skill this project is designed to teach. Debugging is about understanding execution, not guessing.  