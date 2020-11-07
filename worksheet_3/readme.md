# WORKSHEET #3 for CHTP Chapter 7

###Ex. 1. Write a C program
Write the C statements to:
- Create a pointer pD of double type that points to a double variable d1 = 2.5;
- Output the value of d1 using the variable d1;
- Output the value of d1 using the pD;
- Output the address of d1 using TWO different methods

###Ex. 2. Write a C program
Follow the program in Fig. 7.7, write a C program to half the value of a double variable using pass-by-reference with a pointer argument. The name of function is halfByReference().
In the main() function, print out the values of the argument variable before and after the function call.

###Ex. 3. Write a C program
Write a complete C program to do the following:
1)	Create a double array arr_d of 5 elements and initiate it with the values 1.0, 2.0, 3.0, 4.0, 5.0
2)	Create a double pointer pDouble pointing to this array
3)	Use pointer arithmetic and a loop structure to go thru the element of the array, print each element
4)	Calculate and print the sum and average of all the elements of the array

###Ex. 4. Answer the question
What is the problem with the following program?
```c
#include <stdio.h>

int main()
{
	int *ptr_one;
	*ptr_one = 100;

	printf("The number is %d.\n", *ptr_one);
}
```

### Ex. 5. Answer the questions
double var1 = 2.5;\
double * const ptr2 = &var1;                                            

Which of the following statements is OK?\
*ptr2 = 7;\
ptr2 = &var1; 
	
### Ex. 6. Answer the questions
double var1 = 2.5;\
const double *ptr2 = &var1;                                            

Which of the following statements is OK?\
*ptr2 = 7;\
ptr2 = &var1; 
	
###Ex. 7. What is the output? Any errors in the program?
```c
#include <stdio.h>

int main()
{
	int arr[5] = {1,2,3,4,5};

	printf("%d.\n", arr);
}	
```

### Ex. 8. Write a C program
Add another for-loop to the program of Fig. 7.11 so that the characters in the string is printed in the reverse order. Use pointer arithmetic in both for-loops.











	









