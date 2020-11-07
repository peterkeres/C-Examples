//
//  main.c
//  worksheet_1_prob_2
//
//  Created by peter k on 2/14/19.
//  Copyright © 2019 peter k. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    
    //here, i am setting up 2 floating point numbers
    //setting all variables to a "0" eqvilent is a good pratice!
    //      cuz in c, whatever value in memory happens to be their at the time will be the value of that varable
    float fltNumOne = 0, fltNumTwo = 0;
    
    printf("Please enter the first number\n");
    //the scanf function will take in data entered at keyboard and store it to a varable of your choice
    // the format goes ("type of input you are reciving", &'variable name');
    // here we are reciving a float from the keyboard, the & next to varable name, will pass to the scanf the address of that var
    //      this is needed becuase for the scanf to work, it needs to know the spot in memory where that varable lies
    scanf("%f", &fltNumOne);
    
    printf("please enter the second number\n");
    scanf("%f", &fltNumTwo);
    
    if (fltNumTwo == 0)
    {
        printf("I can not divid by 0\nGoodBye\n");
        // the exit fucntion will kill the program
        exit(1);
    }
    
    //the .2 in the format for the out put, says only show 2 numbers after the . point
    // how printf works, any varable you want to print, within the text to the screen you have to put what format you want it in
    // then after the "" you put what varables you want to print in the order they showed up in the ""
    //      dont forget, you can do calculations on the varables in this output line!
    printf("\nThe answer for %.2f divided by %.2f is: %.2f\n", fltNumOne, fltNumTwo, (fltNumOne / fltNumTwo));
    
    printf("\nThe average of %.2f and %.2f is: %.2f\n", fltNumOne, fltNumTwo, (fltNumOne + fltNumTwo) / 2);
    
    printf("\n\nPROGRAM ENDING\n");
    
    return 0;
}
