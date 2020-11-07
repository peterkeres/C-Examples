

// ****SPEICAL NOTE*** look at 'worksheet_8_prob_1.c' for nots on threads



#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <string.h>


//prints string in rev
void * print_string_in_reverse_order (void * str);
//print a char on each line
void * print_string_length (void * str);



int main(int argc, char const *argv[]) {
  puts("PROGRAM START\n");

  pthread_t threadA, threadB;
  int statusA, statusB;
  char * str1 = "this is test string.";
  char * str2 = "test string 2";

  puts("staring thread A");
  statusA = pthread_create(&threadA, NULL, print_string_in_reverse_order, (void*)str1 );
  printf("thread in the main id for A: %d\n", threadA);

  if (statusA != 0) {
    printf("Oops. pthread create returned error code %d\n", statusA);
    exit(-1);
  }

  pthread_join(threadA, NULL);


  puts("starting threadB");
  statusB = pthread_create(&threadB, NULL, print_string_length, (void*)str2 );
  printf("thread in the main id for B: %d\n", threadB);

  if (statusB != 0) {
    printf("Oops. pthread create returned error code %d\n", statusB);
    exit(-1);
  }

  pthread_join(threadB, NULL);

  puts("\n\nPROGRAM END");
  return 0;
}


void * print_string_in_reverse_order (void * str)
{
  puts("in the print string in reverse order function");

  char * pStr = (char*)str;

  size_t len = strlen(pStr);

  printf("start string is: %s\n", pStr);

  printf("%s", "string in rev is: " );
  for (int i= len-1; i>=0; i--)
  {
    printf("%c", pStr[i] );
  }

  puts("");
  pthread_exit(NULL);
}


void * print_string_length (void * str)
{
  puts("in the print string length function");

  char * pStr = (char *)str;
  size_t len = strlen(pStr);

  printf("Start string is: %s\n", pStr );

  for (int i = 0; i < len; i++)
  {
    printf("%c\n", pStr[i] );
  }

  puts("");
  pthread_exit(NULL);
}
