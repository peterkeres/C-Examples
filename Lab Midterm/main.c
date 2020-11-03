/*
    NAME: peter keres
    DATE: jan 13 2019
    PURPOSE: is the midterm for c class / its about the union of sets

*/

#include <stdio.h>
#include <stdlib.h>

//declaring methods
int readSet (int set[], int length);
int checkSet (int set[], int user, int length);
void printSet (int set[], int length);
int Union (int setA[], int setB[], int setC[],int lengthA, int lengthB);
int Intersection (int setA[], int setB[], int setC[],int lengthA, int lengthB);
int Difference (int setA[], int setB[], int setC[],int lengthA, int lengthB);



int main()
{
    int setA[10] = {}, setB[10] = {}, setUn[20] = {}, setInt[20] = {}, setDifA[20] = {}, setDifB[20] = {};
    int setALen = 0, setBLen = 0, setUnLen = 0, setIntLen = 0, setDifALen = 0, setDifBLen = 0;

    printf("hello, welcome to the set functions program!\nPlease enter numbers for set 1\n");
    setALen = readSet(setA, 10);
    printf("\nplease enter numbers for set 2\n");
    setBLen = readSet(setB, 10);

    setUnLen = Union(setA, setB, setUn, setALen, setBLen);
    setIntLen = Intersection(setA, setB, setInt, setALen, setBLen);
    setDifALen = Difference(setA, setB, setDifA, setALen, setBLen);
    setDifBLen = Difference(setB, setA, setDifB, setBLen, setALen);

    printf("\n\nThe sets you have enterd are as followed, set 1:\n");
    printSet(setA, setALen);
    printf("\nset 2: \n");
    printSet(setB, setBLen);

    printf("\n\n The UNION of the two sets are:\n");
    printSet(setUn, setUnLen);

    printf("\n The INTERSECTION of the two sets are:\n");
    printSet(setInt, setIntLen);

    printf("\n the DIFFERENCE of set1 - set2 is:\n");
    printSet(setDifA, setDifALen);

    printf("\n the DIFFERENCE of set2 - set1 is:\n");
    printSet(setDifB, setDifBLen);

    printf("\n\nEND OF PROGRAM!");


    return 0;
}

//reads the user input and adds their vaule into the set, returns the number of items in the set
int readSet (int set[], int length){

    int user = -1, pass = 0, current = 0;

    do{
        printf("please enter a number between 0 and 20 that you want to have in the set, enter 22 to stop\n");
        scanf("%d", &user);

        // if the user wants to quit
        if (user == 22){
            return current;
        }
        else if (user > 20 || user < 0){
            printf("that is not a vaild input, please enter another value\n");
        }
        //checks that the vaule they want is not already in the set
        else if ( checkSet(set, user, length) == 1){
            printf("that number is already in the set, please select another\n");
        }
        //adds the value to the set
        else{
            set[current] = user;

            current ++;

            if (current == 10){
                pass = 1;
            }
        }
         //clear out the keyboar que
        while (getchar() != '\n');
    }while (pass == 0);

    return current;
}

//checks a set to make suer it does not already contain the int "user", will return 1 if so else will return 0
int checkSet (int set[], int user, int length){

    for (int i = 0; i < length; i++){
        if (set[i] == user){
            return 1;
        }
    }

    return 0;
}


//will print the concnts of each set to the screen that is sent to this method
void printSet (int set[], int length){

    for(int i = 0; i < length; i++){
        if (i == (length -1)){
            printf("%2i", set[i]);
        }
        else{
            printf("%2i, ", set[i]);
        }

    }

}


// will take the union of 2 sets and put that into setC, will return the number of elements that are in setC
int Union (int setA[], int setB[], int setC[],int lengthA, int lengthB){

    int lengthC = 0, doubleC = 0;


    //take largets set and put into setC
    // if setA is larger
    if (lengthA >= lengthB){
        for (int i = 0; i < lengthA; i++){
            setC[i] = setA[i];
        }

        lengthC = lengthA;

        //will now add elemnts from setB into setC but checks for doubles
        for (int j = 0; j < lengthB; j++){
            for( int k = 0; k < lengthA; k++){
                //if there is an item in bot setA and setB
                if (setB[j] == setA[k]){
                    doubleC ++;
                }
            }

            //sets the item from setB into setC aslong as long as it does not occure more then once
            if (doubleC < 1){
                setC[lengthC] = setB[j];
                lengthC ++;
            }

            //reset
            doubleC = 0;
        }
    }
    // if setB is larger
    else{
        for (int i = 0; i < lengthB; i++){
            setC[i] = setB[i];
        }

        lengthC = lengthB;

        //will now add elemnts from setA into setC but checks for doubles
        for (int j = 0; j < lengthA; j++){
            for( int k = 0; k < lengthB; k++){
                //if there is an item in bot setA and setB
                if (setA[j] == setB[k]){
                    doubleC ++;
                }
            }

            //sets the item from setA into setC aslong as long as it does not occure more then once
            if (doubleC < 1){
                setC[lengthC] = setA[j];
                lengthC ++;
            }

            //reset and add
            doubleC = 0;
        }
    }

    return lengthC;
}


//will take the "and" of the two sets and set setC to those values, will return the number of elements in setC
int Intersection (int setA[], int setB[], int setC[],int lengthA, int lengthB){

    int lengthC = 0;

    //go thought items of setA and see if they are in setB
    for (int i = 0; i < lengthA; i++){
        for (int j = 0; j < lengthB; j++){
            //the items in setA is in setB
            if (setA[i] == setB[j]){
                setC[lengthC] = setA[i];
                lengthC ++;
            }
        }
    }

    return lengthC;
}


// takes the differecne of setA from setB giveing a setC, returns the number of elemnts in setC
int Difference (int setA[], int setB[], int setC[],int lengthA, int lengthB){

    int lengthC = 0, pass = 0;

    for (int i = 0; i < lengthA; i++){
        for (int j = 0; j < lengthB; j++){
            if (setA[i] == setB[j]){
                pass ++;
            }
        }

        if (pass == 0){
            setC[lengthC] = setA[i];
            lengthC ++;
        }

        pass = 0;
    }


    return lengthC;
}
