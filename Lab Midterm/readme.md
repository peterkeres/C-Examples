# Midterm Exam – C Programming

For this exam, you are asked to implement set functions. A Set is a collection of objects. For example a set can be A = {1, 6, 7, 8, 5}. This set has five elements which are 1, 6, 7, 8, and 5. In this take home exam you will utilize arrays to perform three operations in sets using functions. 

### Functions:
The arrays will represent sets of integer numbers and the operations to perform are:

1. **Union A∪B:**  Given a set A and a set B, the union of two sets is a new set C with the elements that are either on A or B. For example:  Let A = {1 , 6,  7,  8 , 5} and B ={3, 5, 6}, the union A∪B is the set C = {1, 6, 7, 8, 5, 3}. Look that even 5 and 6 are in both A and B, they appear only once in the set C.

1. **Intersection A∩B:**  Given a set A and a set B, the union of two sets is a new set C with the elements that are in A and B at the same time. For example: Let A = {1, 6, 7, 8, 5} and B = {3, 5, 6}, the intersection A∩B  is the set C = {6, 5}.

1. **Difference A – B:** Given a set A and a set B, the difference of two sets is a new set C with the elements that are in A that are not part of B.  For example: Let A = {1, 6, 7, 8, 5} and B = {3, 5, 6}, the difference A-B  is the set C = {1,7, 8}.


### Requirements:

- You must develop this lab using functions only. Your main method must only contain declaration of the variables that you need, the call to the functions and printf messages,  and assignments, but for everything else you must create and implement at least the following functions:

	- **int readSet(int set[], int length_array)** This function takes as parameters the array that represents the set where the numbers are saved and the max_length of the array. The function returns the number of elements that have been read. Remember that the array cannot contain repeated elements.

	- **void printSet(int set[], int length):** This function takes as parameters the array that represents a set lenght of the array, and prints the contents of the set in the screen

	- **int union(int setA[], int setB[], int setC[], int lengthA, int lengthB):** This function takes as parameters the sets A and B with their lengths, and stores in the array C the union of the sets A and B. The function returns the number of elements of the array C (number of elements of the union).

	- **int intersection(int setA[], int setB[], int setC[], int lengthA, int lengthB):** This function takes as parameters the sets A and B with their lengths, and stores in the array C the intersection of the sets A and B. The function returns the number of elements of the array C (number of elements of the intersection).
    
    - **int difference(int setA[], int setB[], int setC[], int lengthA, int lengthB):** This function takes as parameters the sets A and B with their lengths, and stores in the array C the difference A - B. The function returns the number of elements of the array C (number of elements in the difference A - B).
	
- Since the prototypes of the functions are provided, create the declaration of your functions before your main method, and the implementation below the main method.

- Assume that the sets A and B, each can hold 10 elements at most. This means that the union can have at most 20 elements and the intersection at most ten elements. 
- The elements that the set A and B can contain are integer numbers between 0 and 20 inclusively.
- The computer program should request from the user the elements for each set using the readSet function. This means that readSet must be invoked two times from the main to read the set A and then the set B. The readSet function should also verify that there are no duplicates of elements in a set.

Submit a .zip file with your CodeBlocks project.

