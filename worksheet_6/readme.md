# WORKSHEET 6 system call fork()

You may work on this programming exercise in a group of two students.

### Write a C program using the system call fork() according to the following steps: 

1.	In the main() function, call the fork() function to create a new process

2.	The parent process executes the function ParentProcess(int i) that accepts an integer value that is the return value from the call fork(). This function prints the process ID for the parent process. Then, it prints all even numbers no more than the value of the parent process ID.

3.	The child process executes the function ChildProcess(int i) that accepts an integer value that is the return value from the call fork(). This function prints the process ID of the child process. Then, it prints all positive multiples of 7 that are at most the value of the child process ID.
