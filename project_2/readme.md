# Project 2 C Structures
> CPSC 3125Spring 2019

This is an individual project. A health care issue that has been in the news lately is the computerization of health records. This possibility is being approached cautiously because of sensitive privacy and security concerns, among others. Computerizing health records could make it easier for patients to share their health profiles and histories among their various health care professionals. 

In this project, you will define a basic HealthProfile structure for a patient by using C. Use the keyword typedef in the declaration of the structure for simplicity. The structure’s members should include the patient’s name (e.g, “John Smith”), patient’s ID (e.g., 10001), gender (‘M’ or ‘F’), month of birth (1~12), day of birth (1~31), and year of birth (2019). This structure must contain a member which is a pointer to the structure type itself.

### Tasks:
1.	In the main() function, declare a pointer to the HealthProfile structure type, and initialize this pointer using the malloc() function in the C standard library. Declare other variables if needed
2.	have another function that prompts for the patient’s name, and receives the data and uses it to set the corresponding member of the HealthProfile structure created in step 1 through a pointer 
3.	have another function that prompts for the patient’s ID, and receives the data and uses it to set the corresponding member of the HealthProfile structure created in step 1 through a pointer 
4.	have another function that prompts for the patient’s gender, and receives the data and uses it to set the corresponding member of the HealthProfile structure created in step 1 through a pointer 
5.	have another function that prompts for the patient’s date of birth, receives the month of birth (1~12), day of birth (1~31), and year of birth (2019) in pointer parameters. The return type of this function must be void.
6.	all these functions should be called once in the main() function
7.	at the end of the main() function, prints all the information of a patient by using the pointer created in step 1
8.	Your program must be saved as “Project2_lw.c”, where lw is your initials.

### How to Submit?
You must take screenshots for the output of a sample run with appropriate inputs for each structure member typed by the user. Save the screenshots as image or Word files. Put all these screenshots and the C source codes in a ZIP file. 
Grading Criteria
1.	Declaration of the structure (10%)
2.	Implementation of the main() function (40%)
3.	Implementations of the other four functions (40%)
4.	Screenshots of the output (10%)

*Note. The maximum score you can receive is 50% if your program has compilation errors.*
