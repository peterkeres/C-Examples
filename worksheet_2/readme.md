# WORKSHEET #2 for CHTP Chapters 4-6


### Ex. 1. What is the output of this program?
```c
// loop 10 times
for (unsigned int x = 1; x <= 10; ++x) {
      if (x == 5) {
         break; // break loop only if x is 5
      } 
      printf("%u ", x); 
} 
printf("\nBroke out of loop at x == %u\n", x);	
```

### Ex. 2. What is the output of this program?
```c
// loop 10 times
for (unsigned int x = 1; x <= 10; ++x) {
      // if x is 5, continue with next iteration
      if (x == 5) {   
         continue; 
      }
      printf("%u ", x); // display value of x
} 
printf("\nContinue used. x == %u\n", x);	
```

### Ex. 3. Write a complete C program
Write a complete C program to print a sequence of 5 random numbers between 1 and 100 separated by a comma.

### Ex. 4. Write a complete C program
Write a complete C program to print a sequence of 5 random numbers between 1 and 100 separated by a comma. Every time the program is executed, the sequence of 5 numbers should be different.

### Ex. 5. Write a complete C program
Write a complete C program to request 10 double values from user and store them in a C array of size 10. Calculate and print the sum and average of all 10 elements in the array. Use a for-loop.





















	




