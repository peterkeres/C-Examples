# CPSC 3125 (OS) WORKSHEET #8 for creating threads

### Part 1. Write a C program using the function pthread_create() according to the following instructions: 

-	Your program should create two new threads, each of which invokes a different function

-	The first new thread created invokes the following function
  ```c
    void *power_of_two(void *N)  {
        // this function prints the value of 2^N on the screen
        // your code goes here
    }
  ```

-	The second new thread created invokes the following function
```c
void *print_random_number(void *N)  {
	// this function prints on the screen a random number in the range 1~N
	// your code goes here
     }
```

### Part 2. Write a C program using the function pthread_create() according to the following instructions: 

-	Your program should create two new threads, each of which invokes a different function

-	The first new thread created invokes the following function
```c
void *print_string_in_reverse_order(void *str)  {
	// this function accepts a string as an argument
	// it prints the string in reverse order
	// your code goes here
}
```

-	The second new thread created invokes the following function
```c
void *print_string_length(void *str)  {
	// this function accepts a string as an argument
	// it prints each character of the string in a single line
	// your code goes here
     }
```


