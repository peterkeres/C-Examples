//
//  main.c
//  worksheet_3_prob_7
//
//  Created by peter k on 2/15/19.
//  Copyright © 2019 peter k. All rights reserved.
//

#include <stdio.h>

int main()
{
    int arr[5] = {1,2,3,4,5};
    
    printf("%d.\n", arr);
}



//this code is vald but its doing is not what is intended
// frist off, the name of an array is really a pointer, but it points to the first eleemtn of its array
// by using a %P, we could see the address of this array.
// now , its trying to print an address in the format of a integer
// in order to print out each item in the array, we have to do a loop and go to each eleement and print it
