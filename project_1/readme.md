#Project 1 (Individual project)
>CPSC 3125 Spring 2019

## How to use the functions malloc() and free() in C?

### Functions predefined in the C Standard Library
```c
void* malloc( size_t size )
```
> This function tries to allocate a chunk of memory of size bytes.

```c
void free( void* ptr ) 
```
>This function accepts an address returned from malloc(). It releases that chunk of memory. If ptr is NULL, no operation is performed.

Please refer to the following link about how to use these two library functions in C
[here](https://www.codingunit.com/c-tutorial-the-functions-malloc-and-free)

### Tasks
1. Run each of the programs attached.
2. Explain the errors in each of the programs attached. Write your explanation of the errors at the end of each program (Do NOT write on additional files).
3. You MUST use the functions malloc() and free() in the C Standard Library to fix the errors in each of the programs
4. Save the screenshots as image files for the output of each of these programs.

### How to Submit?
You must take screenshots of a sample run for each of your programs. Put all these screenshots image files and the C source codes for both programs in a ZIP file named “Project1-lw”, where lw is your initials. Upload the ZIP file to CougarView.
Grading Criteria
1. “ptr-example1.c” 
Explanation of errors: 20%
Correction of errors with correct output: 30%
2. “ptr-example2.c” 
Explanation of errors: 20%
Correction of errors with correct output: 30%


