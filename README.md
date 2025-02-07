# Freeing a Non-Dynamically Allocated Pointer in C

This repository demonstrates a common error in C programming: attempting to free a pointer that was not allocated using `malloc`, `calloc`, or `realloc`.  This can lead to undefined behavior and program crashes. 

## The Bug

The `bug.c` file contains the erroneous code. The program declares an integer variable `x`, assigns its address to a pointer `ptr`, modifies the value of `x` through the pointer, and then attempts to free the pointer using `free()`.  This is incorrect because `x` was allocated on the stack, not the heap.