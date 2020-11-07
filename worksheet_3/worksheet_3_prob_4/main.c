//
//  main.c
//  worksheet_3_prob_4
//
//  Created by peter k on 2/15/19.
//  Copyright © 2019 peter k. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>


int main()
{
// the malloc fucnion is apart of the <stdlib.h>, what it does is set aside a cunch of memeory in the system
// here we are setting that chuck of meoemry to a pointer to point too
// the (int*) to the left of the malloc, forcees converation so the return of the malloc is a int pointer
// to match the pointer in which it is being set too
    int *ptr_one = (int*) malloc(sizeof(int));
// the * infront of a pointer, sets the value of whatever the pointer is pointing too
    *ptr_one = 100;
    
    printf("The number is %d.\n", *ptr_one);
}


// problem with the codes
// first the pointer was not pointing to any spot in memeory
// so we have the pointer point to a spot in memeory we created with the malloc function
// so now when we set what the pointer points too value of 100, it has a place in memeory to store that value
// then we just print out what the pointer is pointing too value
