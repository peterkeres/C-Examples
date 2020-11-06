// A thread synchronization example
#include<stdio.h>
#include<string.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>

pthread_t tid[2];      // number of new threads to be created
int counter = 0;	    // represents a newly created thread
int sharedVar = 100;   // shared variable by all the threads
pthread_mutex_t lock; // pthread_mutex_t is used to declare an object of type mutex
					    // use this variable (lock) to lock and unlock a mutex

// The following function will be invoked when a new thread is created
void* doSomeThing(void *arg)
{
    pthread_mutex_lock(&lock); // The mutex object referenced by lock will be locked
							     // by calling pthread_mutex_lock()

    sharedVar += 50;
    printf("\n A NEW thread with ID = %d is executing its critical section.", tid[counter++]);	
    printf("\n Reads the value of the shared variable = %d.\n", sharedVar);
	// add your code here
	// .......
    sleep(5);

    pthread_mutex_unlock(&lock); // The pthread_mutex_unlock() function will release
								    // the mutex object referenced by lock
}

int main(void)
{
    if (pthread_mutex_init(&lock, NULL) != 0) // create the mutex before use
    {
        printf("mutex initialization failed\n");
        return 1;
    }

	int i = 0;
    while(i < 2)
    {
        int err = pthread_create(&(tid[i]), NULL, &doSomeThing, NULL);
        if (err != 0)
            printf("cannot create thread :[%s]\n", strerror(err));
        i++;
    }
	
	pthread_join(tid[0], NULL);
    pthread_join(tid[1], NULL);
	
    pthread_mutex_destroy(&lock); // destroy the mutex after use
	
    return 0;
}
// library functions needed for this example
// https://linux.die.net/man/3/pthread_mutex_init
// https://linux.die.net/man/3/pthread_mutex_lock
// http://man7.org/linux/man-pages/man3/pthread_join.3.html
