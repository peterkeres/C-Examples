
# Project 4 Multi-threaded Programming
>CPSC 3125 - Spring 2019

This is an individual project. Write a multi-threaded C program using pthread_create() according to the following instructions: 
1.	Your program should create exactly 2 new threads in the main() function, each of which invokes a different function. Print the thread IDs of the two new threads after they are created.

2.	The first newly created thread invokes the following function
````c
void *print_string_in_reverse_order(void *str)  {
	// this function accepts a string as an argument
	// it prints the string in reverse order
	// your code goes here
}
````

When this thread is created in the main() function, the argument passed to the function print_string_in_reverse_order() is the following string:
char * str = “Hello World!”;

3.	The second newly created thread invokes the following function
void *print_in_uppercase_letters(void *str)  {
	// this function accepts a string as an argument
	// it prints the string in uppercase letters
	// your code goes here
}

When this thread is created in the main() function, the string argument passed to the function print_in_uppercase_letters() is a line of text typed by the user from keyboard.

Your program must be saved as “Project4_lw.c”, where lw is your initials. Write one function at a time, test it and make sure everything in this function is correct before you work on the next function.

### How to Submit?
You must take screenshots for the output of a sample run with appropriate inputs for your program. Save the screenshots as image or Word files. Your ZIP file should contain three items: (1) all the screenshots, and (2) the C source file.
Grading Criteria
1.	Correct output from the main() function (40%)
2.	Correct output from the 1st newly created thread (20%)
3.	Correct output from the 2nd newly created thread (20%)
4.	Screenshots of the outputs (20%)
5.	Extra credit 10 points if submitted by 11:30 PM on March 19.
