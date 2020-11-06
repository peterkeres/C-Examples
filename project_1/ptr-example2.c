//by peter keres
//class: opterating systems

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
//-------ORIGINAL PROBLEM-----
int main()
{
	char *ptr_two;
	*ptr_two = "A constant string in C";
	printf("%s\n", *ptr_two);
}
*/


//---------MY FIX TO PROBLEM-----------
int main()
{

	int len = strlen("A constant string in C") + 1;

	char *ptr_two = (char*) malloc( len * sizeof(char) );

	strncpy(ptr_two,"A constant string in C",len);

	printf("%s\n", ptr_two);

	free(ptr_two);
}


/*
	problem with the code is that the pionter never pointed to a spot in memory.
	so it was pointing to nohting.
	then when assigning the string to the pointer, it was set up as you where trying
	to fit the whole string into the first memeory slot of the pointer.

	to fix this, i made space in memory big enough for the lenght of the sting plus one
	, the plus one is for the '\o' charcter to let the complier know its the end of the
	sting.
	then i assigned the pionter to that memeory space i just made
	then i made a copy of each chater by chater into the space in memory where the pointer
	is pointing too
	finally printed the string, and then used the free fucntion to clear that memory space
*/
