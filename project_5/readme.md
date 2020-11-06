
#Project 5 Thread Synchronization using Mutexes
>CPSC 3125 - Spring 2019

 
This is an individual project. You are to write a C program that will find 3 prime numbers and store them in a shared array of 3 integer elements. Your program must have 3 threads running, each thread will find one prime number in a given range and place it in the first available position of the shared array. 

When a thread determines that the candidate integer is prime, it must atomically place it in the shared array of prime numbers. Storing the prime number into the shared array must be done in a critical section (protected by a mutex which is a binary semaphore) lest another thread try to place another prime number to the shared array at the same time. A mutex is a shared variable that can be in one of the two states: lock (with value 1) or unlocked (with value 0). At any instant, only ONE thread is allowed to access the shared array of prime numbers. 

You will need to write a function prime_test() to determine the primality of a candidate integer given in the range. The 3 prime numbers will be generated as follows:
- The main thread generates a random number in the range of 2~999, and then test its primality. If it is not prime, increase the number by 1 and then test its primality again. Repeat until a prime number is found.
- The 2nd thread generates a random number in the range of 1000~2000, and follow the same steps as above to find the 2nd prime number.
- The 3rd thread generates a random number in the range of 20000~30000, and follow the same steps as above to find the 3rd prime number.

Your program should incorporate principles of good design, including minimizing the time spent within critical sections. Execution of the function prime_test() should not be included in the critical section. Also use good commenting style, remembering that the first thing in any program file should be a comment that gives a brief overview of what the program does.

Your program must be saved as “Project5_lw.c”, where lw is your initials. Write one function at a time, test it and make sure everything in this function works well before you write the next function. 





### Outputs: What to print on the screen?
(a) When a thread is entering the critical section, display the following message on the screen:\
“Thread with ID = ### is entering the critical section and the prime number ??? is placed in the shared array”\
\### is replaced by the thread ID and \
??? is replaced by the prime number found by this thread. 

(b) As soon as all 3 prime numbers are put in the shared array, all the threads should be terminated. 

(c) You must take screenshots of a sample run of your program and save them as an image file. Put the screenshots image file and the C source code in a ZIP file, and upload it to CougarView.

Grading Criteria
1.	Correct output from the main thread (25%)
2.	Correct output from the second thread (25%)
3.	Correct output from the third thread (25%)
4.	Screenshots of all outputs (25%)
5.	Extra credit 10 points if submitted by 11:30 PM Thursday April 4.


