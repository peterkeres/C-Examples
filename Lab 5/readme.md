# Lab 5


### Problem 1.  
Write a program called operations.c that asks the user to type a command for two operations, sum and multiply and perform the following:

- If the user types: sum 1 2 3 4 5
    - The program prints the value 15
- If the user types: multiply 1 2 3 4 5
    - The program prints the value 120.
- For both commands, the numbers are separated by spaces.

*Hint:* The function int atoi(char * str) of the standard C library (#include <stdlib.h>) converts a string to an integer if *str is a string that contains only integers.

Example of an interactive session:

    Type command: sum 1 2 3 4 5

    The result is: 15
    
Submit your .c file or codeblocks project.

### Problem 2:
Given the struct shown below, write the following functions using the struct. The structure represents a fraction (e.g., 1/2 , 1/4, 2/6)

```c
typedef struct FRACTION {
     int numerator;
     int denominator;
} fraction;
```

1. Reduce the fraction f to lowest terms. To reduce a fraction first compute the greatest common divisor (GCD) of the numerator and denominator, then divide both the numerator and the denominator by the GCD (HINT: look in the Internet for the Euclid’s algorithm implementation for C).

    The header of this function is as follows:
    fraction reduce(fraction a); //returns a reduced fraction a.

1. Add the fractions f1 and f2
The header of this function is as follows:
fraction add_fraction(fraction f1, fraction f2);// returns adding f1 and f2

1. Multiply the fractions f1 and f2
fraction multiply_fraction(fraction f1, fraction f2);// returns adding f1 and f2

1. Divide the fraction f1 by f2
fraction divide_fraction(fraction f1, fraction f2); //returns dividing f1 by f2

1. Print fraction
void print(fraction a) // prints a fraction e.g. 1/2 

*Note:* (1) to (4) must return reduced fractions. You can reuse (a) for that.

Create a main function in which you create two fractions, then invoke each of the operations and then print their result of each of them.

