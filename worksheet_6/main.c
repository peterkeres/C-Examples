//
//  main.c
//  worksheet_6_prob_1
//
//  Created by peter k on 2/22/19.
//  Copyright © 2019 peter k. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
// this header file holds the fork function
#include <unistd.h>

void ParentProcess(int i);
void ChildProcess(int i);


int main(int argc, const char * argv[]) {
    puts("\n\nPROGRAM START\n");
    
// the fork function creates another process. called a parent process and a child process
    int process = fork();
    // this call to wait, will put a pause on the parent process if it goes first to let the child process finish first.
    // cuz if the partent process finishes first, the program ends
    wait(NULL);
    
    
    // if fork returns a 0, its on the child process
    if (process == 0)
    {
        ChildProcess(process);
    }
    // if fork returns any postive number, its on the parents process
    else if ( process > 0)
    {
        ParentProcess(process);
        puts("\n\nPORGRAM END\n");
    }
    // if fork returns a negitve number, it means the fork coult not happen. so we need to exit the program
    else
    {
        puts("ERROR - could not do the fork call");
        exit(1);
    }
    
    return 0;
}

void ChildProcess(int i)
{
    // the getpid function will return the id of this process. we can use pid_t instead of int for pid's
    pid_t pid = getpid();
    printf("the process id of the child is: %d\n", pid);
    printf("the return of the fork call: %d\n\n", i);
}

void ParentProcess(int i)
{
    pid_t pid = getpid();
    printf("the process id of the Parent is: %d\n", pid);
    // the return of the folk call for the parent, is the id of its child that it made
    printf("the return of the fork call: %d\n", i);
    
}
