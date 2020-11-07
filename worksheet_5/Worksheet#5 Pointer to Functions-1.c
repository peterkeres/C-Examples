// Worksheet #5 
// Pointer to functions
/* 
Tasks to do:
   1. Add the following function to the program
	  divideBy(int a, int b) that returns a floating-point value of a/b
	  make sure that b != 0
   2. Modify the main() function accordingly
*/

#include <stdio.h>

void add(int a, int b)
{
    printf("Addition is %d\n", a+b);
}

void subtract(int a, int b)
{
    printf("Subtraction is %d\n", a-b);
}

void multiply(int a, int b)
{
    printf("Multiplication is %d\n", a*b);
}





 
int main()
{
    // fun_ptr_arr is an array of function pointers
    void (*fun_ptr_arr[])(int, int) = {add, subtract, multiply};
    unsigned int choice, a = 15, b = 10;
 
    printf("Enter Choice: 0 for add, 1 for subtract, 2 for multiply\n");
    scanf("%d", &choice);
 
    if (choice > 2) return 0;
 
    (*fun_ptr_arr[choice])(a, b);
 
    return 0;
}