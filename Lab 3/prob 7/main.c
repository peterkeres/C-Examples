/*
    NAME: peter keres
    DATE: jan 9 2019
    purpose: the answer to problem 7 on lab 3
*/

#include <stdio.h>
//#include <stdlib.h>

int main()
{
    int count = 0, user = 0, row1 = 0, row2 = 0, row3 = 0, row4 = 0, row5 = 0, pr = 0;

        // getting the numbers from the user
        do{
            printf("please enter a number from 1 - 20\n");

            // user valadition, if scanf returns anyhting not a 1, its a non number
            if (scanf("%d", &user) != 1){
                printf("that is an invald input, please try again\n");
            }
            else if (user > 20 || user < 1){
                printf(" number is out of the range\n");
            }
            else{
                // putting each vaild user input into a holding that will be printed out later
                switch(count)
                    {
                        case 0:     row1 = user;
                                    break;
                        case 1:     row2 = user;
                                    break;
                        case 2:     row3 = user;
                                    break;
                        case 3:     row4 = user;
                                    break;
                        case 4:     row5 = user;
                                    break;
                        default:    printf("an error happend in the table\n");
                    }
                    printf("great! enter the next number\n");
                    count += 1;
            }

            //clear out the keyboar que
            while (getchar() != '\n');

        }while(count < 5);

        //displaying the the lines
        count -= 1;
        do {
            //getting the numbers the user entered in and the order they entered them
            switch(count)
            {
                case 0:     pr = row5;
                            break;
                case 1:     pr = row4;
                            break;
                case 2:     pr = row3;
                            break;
                case 3:     pr = row2;
                            break;
                case 4:     pr = row1;
                            break;
                default:    printf("an error happend in the table 2\n");
            }

            //printing out the number of stars
            do{
                printf("*");
                pr -= 1;
            }while(pr > 0);

            printf("\n");
            count -= 1;
        }while(count >= 0);

    return 0;
}
