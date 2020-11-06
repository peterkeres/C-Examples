//by peter keres
//class: opterating systems

#include <stdio.h>
#include <stdlib.h>


/*
//-----ORGINAL PROBLEM------
int main()
{
	int *ptr_one;
	*ptr_one = 100;
	printf("The number is %d.\n", *ptr_one);
}
*/


//-----MY FIX TO THE PROBLEM-----
int main()
{

	int *ptr_one = (int*) malloc ( sizeof(int) ) ;
	*ptr_one = 100;
	printf("The number is %d.\n", *ptr_one);

	free(ptr_one);
}


/*
what happened here is that the pointer never had space in memory to point too
so in a way it was like it was pointing to nothing.
what had to be doen is we need to make space in momeory for somtihng to be stored in
then have that pointer point to that space in memory.
finally, we cleared up that memroy space using the free function
*/
