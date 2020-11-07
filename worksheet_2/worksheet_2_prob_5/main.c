//
//  main.c
//  worksheet_2_prob_5
//
//  Created by peter k on 2/15/19.
//  Copyright © 2019 peter k. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    printf("\nPROGRAM START\n\n");

// to set up an array , we have to set the type of each element in the array, name, size of the array
// in order to get the size of the array, we use the size of function, which gets us the size in bytes of somthing
// so what we do is take the size of the array and divide it by the size of the first eleemtn
    // which gets us the totall number of elements in the array 
    double dlbUser = 0;
    double arrDlbUser[10] = {};
    double arrDlbSize = sizeof(arrDlbUser) / sizeof(arrDlbUser[0]);
    double dlbTotal = 0;
    
    for (int i=0; i < arrDlbSize; i++)
    {
    printf("\nplease enter the %dth deciaml number:", i+1);
    scanf("%lf", &dlbUser);
    arrDlbUser[i] = dlbUser;
    }
    
    for (int j=0; j<arrDlbSize; j++)
    {
        dlbTotal += arrDlbUser[j];
    }
    
    
    printf("\n\nthe total for the array is: %lf\n", dlbTotal);
    
    printf("the avarage of the array is: %lf\n", dlbTotal/arrDlbSize);
    
    printf("\n\nEND OF PROGRAM\n");
    
    return 0;
}
