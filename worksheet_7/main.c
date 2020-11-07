//
//  main.c
//  worksheet_7_prob_1
//
//  Created by peter k on 2/22/19.
//  Copyright © 2019 peter k. All rights reserved.
//
// SPEICAL NOTE   IN XCODE IT COMES OUT IN WRONG ORDER, BUT IF YOU DO THE GCC COMPILER IN THE COMANDLINE, ITS GOOD

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

//NOTES--  its a good idea that after each partent process, do a wait null. this allows its child process to go first. here we have 2 process and each process has a sub parent process
// the wait allows us to controll the order in which they happen.
// here we are saying at first split if you are a parent, let child go first. then when that child forks, we let its child go first and let teh parent go next. then back to the outter parent

int main(int argc, const char * argv[]) {
    puts("\n\nPROGRAM START\n");
    
    
    pid_t process = fork();
    
    // for first child process
    if (process == 0)
    {
        pid_t processSub = fork();
        
        //for sub child forks
        if (processSub == 0)
        {
            printf("My id is :%d\n",getpid() );
            printf("my parent id is :%d\n", getppid());
            for (int i =40; i>30; i--)
            {
                printf("%d,", i);
            }
            printf("\n\n");
        }
        else if (processSub > 0)
        {
            wait(NULL);
            printf("My id is :%d\n",getpid() );
            printf("my parent id is :%d\n", getppid());
            for (int i =30; i>20; i--)
            {
                printf("%d,", i);
            }
            printf("\n\n");
            
        }
        else
        {
            puts("ERROR-- could not do fork for processSub");
            exit(1);
        }
    }
    //for root parent process
    else if (process > 0)
    {
        wait(NULL);
        pid_t processParent = fork();
        
        //sub child fork
        if (processParent == 0)
        {
            printf("My id is :%d\n",getpid() );
            printf("my parent id is :%d\n", getppid());
            for (int i =20; i>10; i--)
            {
                printf("%d,", i);
            }
            printf("\n\n");
        }
        else if (processParent > 0)
        {
            wait(NULL);
            printf("My id is :%d\n",getpid() );
            for (int i =10; i>0; i--)
            {
                printf("%d,", i);
            }
            printf("\n\n");
            
        }
        else
        {
            puts("ERROR-- could not do process parent fork");
            exit(1);
        }
        
    }
    //error in the fork
    else
    {
        puts("ERROR- could not do first fork");
        exit(1);
    }
    
    
    return 0;
}
