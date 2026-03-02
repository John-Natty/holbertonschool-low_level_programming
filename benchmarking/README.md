Introduction and 

Software efficiency is not an abstract concern. Inefficient programs keep the CPU active longer, which typically increases energy consumption at scale. Professional energy profiling requires specialized tooling, but developers can already make responsible decisions using basic performance measurement and controlled experiments.

This project introduces benchmarking as an engineering practice: you will run predefined C programs, measure execution time, compare implementations, and reason about what the results mean in terms of efficiency and sustainability.

This is not an optimization contest. The focus is on measurement discipline and evidence-based reasoning.

Learning Objectives

By completing this project, you will be able to:

Compile C programs using strict compiler flags and interpret failures.  
Measure execution time using clock() and interpret timing variability.  
Compare two implementations fairly under controlled conditions.  
Explain how algorithmic efficiency connects to runtime and energy usage.  
Write a short technical report grounded in your own measurements. 

Resources

Use the following references to research and validate your work:

Linux time command manual: https://man7.org/linux/man-pages/man1/time.1.html 
clock() and CLOCKS_PER_SEC documentation: https://en.cppreference.com/w/c/chrono/clock  
Intro to algorithm analysis / Big-O (conceptual): https://www.geeksforgeeks.org/analysis-algorithms-big-o-analysis/  
Efficient code and sustainability (conceptual overview): https://hmnshudhmn24.medium.com/  the-silent-byte-why-your-codes-carbon-footprint-matters-and-how-to-shrink-it-a434b7ef420c   

Requirements

Compilation

All C files must compile with:

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-long-long  

General Rules

The provided source files are the starting point.  
Only the instrumentation exercise is intended to be modified.  
No external libraries beyond the C standard library.  
Benchmarking must be executed on the same machine/environment for all measurements.  

Notes

This project does not measure real power draw in watts.  
Runtime is used as a proxy: longer runtime generally implies longer CPU activity.  
A deeper version of this concept will be revisited in a later module using additional tools.  