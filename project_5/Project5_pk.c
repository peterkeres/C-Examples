/*
    *created by:  peter keres
    *date:        4-3-2019
    *assigment:   project 5 in operating systems
*/

#include <stdio.h>
#include <string.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>


#define NUMBER_OF_THREADS 3
#define TRUE 1
#define FALSE 0

pthread_t tid[NUMBER_OF_THREADS];      // number of new threads to be created
int intCurPrime = 0;	                 // represents a newly created thread
int intArrPrimeNum[NUMBER_OF_THREADS]; // shared variable by all the threads
int intArrBase[] = {998, 1001, 10001}; // used to create random number
int intArrOffset[] = {2, 1000, 20000}; // used to create ranomd number
pthread_mutex_t lock;                  // pthread_mutex_t is used to declare an object of type mutex
					                             // use this variable (lock) to lock and unlock a mutex

// functions
void* prime_test(void *randNum);

int main(void)
{
    if (pthread_mutex_init(&lock, NULL) != 0) // create the mutex before use
    {
        printf("mutex initialization failed\n");
        return 1;
    }


	  int i = 0;
    while(i < NUMBER_OF_THREADS){
        int err = pthread_create(&(tid[i]), NULL, &prime_test, NULL);

        if (err != 0)
            printf("cannot create thread :[%s]\n", strerror(err));
        i++;
    }

    //forces all threads go in order
	  pthread_join(tid[0], NULL);
    pthread_join(tid[1], NULL);
    pthread_join(tid[2], NULL);

    pthread_mutex_destroy(&lock); // destroy the mutex after use

    return 0;
}


void* prime_test(void *randNum)
{

  int boolIsPrime;
  size_t seed = time(NULL);
  srand(seed);

  // between the lock and unlock methods of the mutext, we put the cricital section
  // of the threads.
  pthread_mutex_lock(&lock);
  printf("Thread with id: %d is entering the critical section ", tid[intCurPrime]);

  unsigned int intRandNum = (rand() % intArrBase[intCurPrime]) + intArrOffset[intCurPrime];
  unsigned int* ptrIntRandNum = &intRandNum;

  do {
      boolIsPrime = TRUE;
      unsigned int n = 2;

      for (; n < *ptrIntRandNum/2; n++){
        if( *ptrIntRandNum % n == 0){
          boolIsPrime = FALSE;
          break;
        }
      }

      if (boolIsPrime == FALSE)
          *ptrIntRandNum = *ptrIntRandNum + 1;

  } while(boolIsPrime == FALSE);

  printf("and the prime number %d is placed in the shared array.\n", *ptrIntRandNum);

  intArrPrimeNum[intCurPrime] = *ptrIntRandNum;
  intCurPrime ++;

  pthread_mutex_unlock(&lock);

  pthread_exit(NULL);
}
