
// ***SPEICAL NOTE*** any notes on threads, see 'worhseet_8_prob_1.c'
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <string.h>
// this is needed for the too upper method
#include <ctype.h>


#define NUMBER_OF_THREADS 2
#define MAX_INPUT 100


void * print_string_in_reverse_order (void * str);
void * print_in_uppercase_letters (void * str);
void input(char *string);


int main(int argc, char const *argv[]) {
  puts("PROGRAM START\n");

/*
    here we are setting up an input buffer for user input
      this is a secury mesure, so the user doesnt enter in a input so big that we
      get a buffer overflow error.
*/
  char buffer[MAX_INPUT];
  //we send this buffer to an input method that will get the user input.
  input(buffer);
  puts("");

  int status;
  /*
    this is an arrry of pointers to functions, this is cool becuase we have an array
      of functions and then call them with just an index.
      normally, after the name of the array, you have to put what vars are going to be passed
      but becuase they are all void pinters, we dont have too here.
    the * in front of the array name, means this array will be a arry of pointers
    the void, is the reurn type of each methods

  */
  void (*fun[2]) = {print_string_in_reverse_order, print_in_uppercase_letters};

  //this is an array of char* pointers, aka strings
  char * strings[2] = {"Hello World!", buffer};
  // this is an array of pthread_t types. to hold the ID of the threads
  pthread_t threads[NUMBER_OF_THREADS];

  for (int i = 0; i < NUMBER_OF_THREADS; i++)
  {
    printf("in the main, makthing thread %d\n", (i+1));

    /*
      here we use the all the arrys and call the items needed
      we send it an address of whatever thread we are on
      we send it whatever funciton we are on
      we send it what ever string value we need, but we have to case it first!
    */
    status = pthread_create(&threads[i], NULL, (fun[i]), (void*)strings[i]);

    printf("the ID is: %d\n", threads[i]);

    if (status != 0) {
			printf("Oops. pthread create returned error code %d\n", status);
			exit(-1);
		}

    pthread_join(threads[i], NULL);

    puts("");
  }

  puts("\nPROGRAM END");
  return 0;
}



void * print_string_in_reverse_order (void * str)
{
  puts("in the print string in reverse order function");

  char * pStr = (char*)str;
  size_t len = strlen(pStr);

  printf("\"%s\" string in reverse is: " , pStr);

  for (int i= len-1; i>=0; i--)
  {
    printf("%c", pStr[i] );
  }

  puts("");
  pthread_exit(NULL);
}



void * print_in_uppercase_letters (void * str)
{
  puts("in the print in uppercase letters function");

  char * pStr = (char*)str;
  size_t len = strlen(pStr);

  // can use \" to print a "
  printf("\"%s\" in upper case is: ", pStr);

  for (int i =0; i < len; i ++)
  {
    // this will take one char and make it upper case
    // toupper only works with char type
    printf("%c", toupper(pStr[i]) );
  }

  puts("");
  pthread_exit(NULL);
}


void input (char * string)
{
  puts("Please enter a string you want to be all cap");
  /*
    # FGETS - is used for getting input from the user becuase it it much safer
      becuase fgets has a number of how many char it will take. therefore therefore
      there can be no buffer overflow bugs
    # PARM ONE - is the pointer/ address of where the input from the user should be stored
    # PARM TWO - is the length of how many characters it shouold take in
    # PARM THREE - is where the input is coming from, here stdin is the standard input (keyboard)
    # KEEP IN MIND- fgets will store the new line character, we have to take it out if dont want
  */
  fgets(string, MAX_INPUT, stdin);

  // this will get the new line character and replace it with then termantin character
  // we keep going to the next spot in the string untill we find the new line
  // then while the pointer is at that spot, we set it to the termanting characters
  while (*string != '\n')
  {
    string++;
  }

  *string = '\0';
}
