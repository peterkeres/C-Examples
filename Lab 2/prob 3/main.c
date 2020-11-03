#include <stdio.h>
#include <stdlib.h>

/*
    NAME: peter keres
    DATE: jan 8 2019
    PURPOSE: answering questions 3 of lab 2
*/

int main()
{
   float x = 2.55, answer = 0;

   answer = 3 * (x*x*x);
   answer -= 5 * (x*x);
   answer += 6;

   printf("the answer to the problem is %f", answer);

    return 0;
}
