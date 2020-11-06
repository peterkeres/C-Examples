//
//  main.c
//  project3_pk
//
//  Created by peter k on 2/23/19.
//  Copyright © 2019 peter k. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

void rootParent ();
void firstChild ();
void secondChild ();
void thirdChild ();


int main(int argc, const char * argv[]) {
    puts("\n\nPROGRAM START\n");
    
    pid_t process = fork();
    
    // first child process
    if (process == 0)
    {
        pid_t childProcess = fork();
        
        // the child process of the first child, AKA the second child process created
        if (childProcess == 0)
        {
            puts("SECOND CHILD PROCESS");
            secondChild();
            puts("");
        }
        // the parent process of the first child process, aka the first child process it self
        else if (childProcess > 0)
        {
            wait(NULL);
            puts("FIRST CHILD PROCESS");
            firstChild();
            puts("");
        }
        else
        {
            puts("ERROR-- childProcess fork faild");
            exit(1);
        }
        
    }
    //root parent process
    else if (process > 0)
    {
        wait(NULL);
        pid_t parentProcess = fork();
        
        // the child process of the root parent, AKA the third child process created 
        if (parentProcess == 0)
        {
            puts("THIRD CHILD PROCESS");
           thirdChild();
            puts("");
        }
        // the parent process of the root parent, aka the root process itslef
        else if (parentProcess > 0)
        {
            wait(NULL);
            puts("ROOT PARENT PROCESS");
            rootParent();
            puts("\n\nPRGRAM END\n");
            
        }
        else
        {
            puts("ERROR-- childProcess fork faild");
            exit(1);
        }
    }
    else
    {
        puts("ERROR-- could not do the first fork.");
        exit(1);
    }
    
    return 0;
}



void rootParent()
{
    FILE *ptrInFile;
    int sum = 0, number = 0, count = 0;
    pid_t myPid = getpid();
    
    printf("My pid is %d\n", myPid);
    
    if ( (ptrInFile = fopen("input.txt", "r")) == NULL)
    {
        puts("ERROR: could not open 'input.txt'");
    }
    else
    {
        
        while ( ! feof(ptrInFile) )
        {
            fscanf(ptrInFile, "%d", &number);
            sum += number;
            count ++;
        }
        
        fclose(ptrInFile);
        printf("The number of digits in the file is : %d\n", count);
        printf("The sum for the file is : %d\n", sum);
    }
}


void firstChild ()
{
    size_t seed = time(NULL);
    srand(seed);
    pid_t myPid = getpid(), parPid = getppid();
    FILE * ptrOutFile;
    unsigned int randNum = 0;
    
    printf("My pid is :%d\n", myPid);
    printf("My parent pid is :%d\n", parPid);
    
    if ( (ptrOutFile = fopen("output.txt", "w")) == NULL )
    {
        puts("ERROR--Could not make the output.txt file");
    }
    else
    {
        for (int i =0; i < 10; i++)
        {
            randNum = (rand() % 451) + 50;
            fprintf(ptrOutFile, "Random number %d is : %d\n", i, randNum);
        }
        
        fclose(ptrOutFile);
    }
}


void secondChild ()
{
    pid_t myPid = getpid(), parPid = getppid();
    int array[] = {34, 14, 151, 560, 56, 187, 205, 184, 43, 5, 12, 80};
    int sum = 0;
    double avg = 0.0;
    int arrSize = sizeof(array) / sizeof(array[0]);
    
    printf("My pid is :%d\n", myPid);
    printf("My parent pid is :%d\n", parPid);
    
    for (int i=0; i < arrSize; i++)
    {
        sum += array[i];
    }

    avg = sum / arrSize;
    
    printf("the average of the array is %.2lf\n", avg);
}


void thirdChild ()
{
    pid_t myPid = getpid(), parPid = getppid();
    size_t seed = time(NULL);
    srand(seed);
    int nextNum = 1;
    unsigned int randRange = 0, curRandNum = 0, count = 1;
    
    printf("My pid is :%d\n", myPid);
    printf("My parent pid is :%d\n", parPid);
    
    randRange = (rand() % 2001) + 1000;
    printf("The max range of multiples are :%d\n\n", randRange);
    
    while (nextNum)
    {
        curRandNum = 37 * count;
        if (curRandNum > randRange)
        {
            nextNum = 0;
        }
        else
        {
            printf("the %d multiple of 37 is : %d\n", count, curRandNum);
            count ++;
        }
    }
    
}
