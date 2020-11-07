// Worksheet #5
// Pointer to functions
/*
 Tasks to do:
 1. Add the following function to the program
 divideBy(int a, int b) that returns a floating-point value of a/b
 make sure that b != 0
 2. Modify the main() function accordingly
 */


// here we are going over the idea of a pointer to a function!
// what this idea is mostly used for it, an array that points too a function you want to do
// so you can index what function you want to run at a cerian time
#include <stdio.h>

//here we are just declaring and making our fucntions at the same time!
// in stead of just declaring them now and adding them later
// personally i dont like doing it this way cuz its slighty more annoying to read
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

//ADDED THIS
void divideBy(int a, int b)
{
    if (b != 0)
    {
        printf("Division is %.2f\n", (double)a/b);
    }
}





int main()
{
    // fun_ptr_arr is an array of function pointers
    //ADDED HERE
    // this is where we are going to creat the array of pointers to functions
    // how this works is follows,
    // first the return type of all the fucntinos (they must all return the same type) here its 'void'
    // then we declar the name of the arra and saying its a pointer of arrays, '(*fun_ptr_arr[])
    // then we put what paramaters type that the fucntios need (all must be the same!) here its '(int,int)'
    // then we set this array to the functinos in the order we want them, with out delcaring the paramters neede cuz we already did that
    //      here its '{add, subtract, multiply, divideBy};'
    void (*fun_ptr_arr[])(int, int) = {add, subtract, multiply, divideBy};
    unsigned int choice, a = 15, b = 10;
    
    //ADDED HERE
    printf("Enter Choice: 0 for add, 1 for subtract, 2 for multiply, 3 for divide\n");
    scanf("%d", &choice);
    
    //ADDED HERE
    if (choice > 3) return 0;
    
    // here we use the * cuz we need to defrenece the address to the functino itselt,
    // we select the index in that array for what functino to run
    // finally we send the paramaters needed
    (*fun_ptr_arr[choice])(a, b);
    
    return 0;
}
