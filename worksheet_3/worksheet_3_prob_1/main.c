//
//  main.c
//  worksheet_3_prob_1
//
//  Created by peter k on 2/15/19.
//  Copyright © 2019 peter k. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    printf("\nSTART OF PROGRAM\n\n");
    
// we are using a pointer to the variable d1, for pointers to work we need to delcar the type the pointer will
    // point too, then put a * (saying its apointer) then name of pointer. we assign it the address of the
    // variable we want it to point too.
    double d1 = 2.5;
    double * pD = &d1;
    
    printf("the value of d1 is :%lf\n", d1);
// by using %p, we can print out the value of what the pointer holds, which is just a memeory address of a varable
    printf("the value of the pointer itself :%p\n", pD);
// by using the * we defrence the pinter, so it will get us the value of what every its pointing too
    printf("the value of d1 with the pointer :%lf\n", *pD);
    
    printf("\n\nEND OF PROGRAM\n");
    
    return 0;
}
