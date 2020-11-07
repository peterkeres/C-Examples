//
//  main.c
//  worksheet_3_prob_2
//
//  Created by peter k on 2/15/19.
//  Copyright © 2019 peter k. All rights reserved.
//

#include <stdio.h>

// in c, we have to atleast delcare the methods before we can use them anywhere in the program,
// we will define the method later, but delcaring it must be done now
// here we are passsing a pointer to a double and within the method is will be referencedd by the name
// pDlbNumberHalf
void halfByReference (double *pDlbNumberHalf);

int main(int argc, const char * argv[]) {
   
    printf("\n\n START OF THE PROGRAM\n\n");
    double dlbNumber = 2.5;
    
    double * pDlbNumber = &dlbNumber;
    
    
    printf("the value of number before the method is :%lf\n", dlbNumber);
    printf("the address of that varable is :%p\n\n", pDlbNumber);
    
// when passing a pointer, this is passing by reference. aka any change you make will permently
// make a change to that varable
// unlike pass by value which is just passing a copy of that value
// we could also instead of just passing the pointer, we could just pass the address of the varable
    halfByReference (pDlbNumber);
   // halfByReference (&dlbNumber);
    
    printf("the value of the number AFTER the method is :%lf\n", dlbNumber);
    printf("the address of that varable is :%p\n", pDlbNumber);
    
    printf("\n\nEND OF PROGRAM\n");
    
    return 0;
}


// here we go ahead and define the method, the first line must match the delcaring at the top
void halfByReference (double *pDlbNumberHalf)
{
    *pDlbNumberHalf = *pDlbNumberHalf / 2;
    
}
