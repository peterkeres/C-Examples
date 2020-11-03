# Lab 4: Working with Arrays and Functions

### Problems

#### Problem 1:
(Duplicate Elimination) Use a single-subscripted array to solve the following problem. Read in 20 numbers, each of which is between 10 and 100, inclusive. As each number is read, print it only if it’s not a duplicate of a number already read. Provide for the “worst case” in which all 20 numbers are different. 
There may be more than one possible solution to this problem. 

#### Problem 2:
(Parking Charges) A parking garage charges a $2.00 minimum fee to park for up to three hours and an additional $0.50 per hour for each hour or part thereof over three hours. The maximum charge for any given 24-hour period is $10.00. Assume that no car parks for longer than 24 hours at a time. Write a program that will calculate and print the parking charges for each of three customers who parked their cars in this garage yesterday. You should enter the hours parked for each customer. Your program should print the results in a neat tabular format, and should calculate and print the total of yesterday's receipts. The program should use the function calculateCharges to determine the charge for each customer. Your outputs should appear in the following format:

    Cars    Hours    Charge
    1       1.5         2.00
    2       4.0         2.50
    3       24.0        10.00
    
    Total   29.5        14.50
    
#### Problem 3:
(Dice Rolling) Write a program that simulates the rolling of two dice. The program should use rand() function to roll the first die, and should use rand() again to roll the second die. The sum of the two values should then be calculated. [Note: Since each die can show an integer value from 1 to 6, then the sum of the two values will vary from 2 to 12, with 7 being the most frequent sum and 2 and 12 the least frequent sums.] Figure 1 shows the 36 possible combinations of the two dice. Your program should roll the two dice 36,000 times. Use a single-subscripted array to tally the numbers of times each possible sum appears. Print the results in a tabular format. Also, determine if the totals are reasonable; i.e., there are six ways to roll a 7, so approximately one-sixth of all the rolls should be 7. 
 
Figure 1. Possible results of the rolling of two dice.  

**Note:**

In order to use the function rand, you must include the header file stdlib.h. The prototype of the function is

	 int rand(void);

The function rand() returns a pseudo-random integral number.  This number will be in the range 0 to RAND_MAX. The algorithm of rand() uses a seed to generate the series of numbers, this is why srand must be used to initialize the seed to some distinctive value. The random numbers are delivered from a predetermined range. A source code example is given in Figure 2. 


### Deliverables
C code with your solutions for each program. Name them lastName_1.c, lastName_2.c, etc… 
Plagiarism will be an automatic 0. No exceptions.

