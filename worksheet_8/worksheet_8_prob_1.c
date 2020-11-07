
// ***SPEICAL NOTE*** when compling a c code with threads, you have to use
// -lpthread    it might be different in a non lunix inviroment not sure


#include <stdio.h>
#include <stdlib.h>
//any time you use threads, you have to import this header file
#include <pthread.h>
#include <math.h>
#include <time.h>



// declaring our methods/funcitons
/***************************************NOTES**********************************************
    # VOID * PARAMATER - void in c can be thought of as a 'wild card', it can mean any type
      so, we are saying here that this method will take a pointer of any type. But in order
      to pass a pointer to this method, we must convert it to a void *
    # VOID * RETURN TYPE - its saying it will return a pointer of type void, aka a wild
      type pointer. So we would have to cast that pointer as anohter pointer type inorder to
      use it.
*/
void * power_of_two(void * num);
void * print_random_number(void * num);


int main(int argc, char const *argv[]) {

    puts("PROGRAM START\n");

    // is a int type that is used to hold the ID of a thread.
    pthread_t threadA, threadB;
    int statusA, statusB, power=10, range=10;

    /*
      #PTHREAD_CREATE - this method is used to create a new thread. it takes 4 paramaters
        and returns a int, indcating if the creation of the thread was successful or not.
        anything other then a 0, means it could not create the thread and is the error code.
      #PRAM ONE - is where the Id of the thread will be stored. has to be an address so
        use &varname or a pointer
      #PRAM TWO - is the threads attrubites, to use the defualt send NULL
      #PARM THREE - is the function in which the thread will run when it is created.
      #PARM FOUR - is the varablie that will be sent to the method.
        here, beucase the method is accepting a pointer of type void. we have to cast
        it to a void pointer, then change it back within the method.
    */
    statusA = pthread_create(&threadA, NULL, power_of_two, (void*) &power);

    //printing the id of the thread, which is a int type
    printf("thread in the main id for A: %d\n", threadA);
    // checking to see if the thread was created or not
    if (statusA != 0) {
  		printf("Oops. pthread create returned error code %d\n", statusA);
  		exit(-1);
  	}

    /*
      #PTHREAD_JOIN - is a method that will stop other threads from running untill
        the thread you tell it is done.
      #PARM ONE - is the ID of the thread you want to finish before the other threads can go
      #PARM TWO - this should be a pointer to a var that you want to save whatever is returned
        from pthread_exit in the method used of that thread.
        here, becuase we return a null in the thread, we can just use NULL as the param
    */
    pthread_join(threadA, NULL);

    statusB = pthread_create(&threadB, NULL, print_random_number, (void*) &range);
    printf("thread in the main id for B: %d\n", threadB);
    if (statusB != 0) {
  		printf("Oops. pthread create returned error code %d\n", statusB);
  		exit(-1);
  	}

    pthread_join(threadB, NULL);

    puts("\n\nPROGRAM END");
  return 0;
}


void * power_of_two(void* num)
{
    // takes an umber and takes it to power of 2
    puts("Entering power of two function");
    /*
      #CASING FROM VOID * - in order to use a pointer like we nomally would, we
        have to cast the void pointer to a pointer of the type we intend to use
    */
    int* number = (int*)num;

    printf("2 ^ %d power is: %.2lf\n", *number, pow(2.0, *number) );

    /*
      #PTHREAD_EXIT - this method 'kills' the thread.
        it also can return a value, here we are not returning a value so we send NULL
    */
    pthread_exit(NULL);
}



void * print_random_number(void * num)
{
    puts ("Entering print random number fucntion");

    int* number = (int *)num;
    time_t seed = time(NULL);
    srand(seed);

    int randNum = (rand() % *number) + 1;
    printf("The random number is: %d\n", randNum);

    pthread_exit(NULL);
}
