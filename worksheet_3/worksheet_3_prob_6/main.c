//
//  main.c
//  worksheet_3_prob_5
//
//  Created by peter k on 2/15/19.
//  Copyright © 2019 peter k. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    double var1 = 2.5;
// here we are using the const keyword, it means somthing can not change once it is made a const
// when using const on pointers, we have 2 things we can set to constant
// one being the value of what the pinter is pointing too
// two being the value of the addresss of the pointer itself
// when its '* const', it means the value of the pointer (the address it pointed too) can not change
// keep in mind, if you want you can do both!
    //double * const ptr2 = &var1;
    
// when  its 'const datatype' it means the value of what the pointer is pointing too cannot change
    const double * ptr2 = &var1;
    
    //Which of the following statements is OK?
// this statment is ok becuase it is changing the value of what the pointer is pointint too,
// not the address if what the pointer is pointing too
    //*ptr2 = 7;

// this would be ok, if we do the other way we created the pointer, becuase we can change what address
// the pointer is pointing too but not the value stored at that address
    ptr2 = &var1;

    return 0;
}
