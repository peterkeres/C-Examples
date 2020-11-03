/*
    NAME: peter keres
    DATE: jan 17 19
    PURPOSE: is the 2st problem in the lab 5
*/

#include <stdio.h>
#include <stdlib.h>

//structs
typedef struct fraction{
        int numerator;
        int denominator;
}fraction;


//methods
fraction reduce (fraction a);
int gcd (int a, int b);
fraction add_fraction (fraction f1, fraction f2);
fraction multiply_fraction (fraction f1, fraction f2);
fraction divide_fraction (fraction f1, fraction f2);
void print (fraction a);



int main()
{
    //NOTE: CHANGE THESE 2 FRACTIONS TO CHANGE THE "TEST VALUES"
    fraction test = {1, 2};
    fraction test2 = {1, 6};

    printf("YOUR STARTING FRACTIONS ARE AS FOLLOWED\n FRACTION ONE\n");
    print(test);
    printf("\nFRACTION TWO\n");
    print(test2);


    printf("\nreducing fraction one\n");
    print(reduce(test));
    printf("reducing fraction two\n");
    print(reduce(test2));

    printf("\nadding both fractions together\n");
    print(add_fraction(test, test2));

    printf("\nmultiplying both fractions together\n");
    print(multiply_fraction(test, test2));

    printf("\ndividing both fractions together\n");
    print(divide_fraction(test, test2));


    printf("\n\nPROGRAM END");

    return 0;
}


//this reduces the fraction
fraction reduce(fraction a){

    int numGcd = gcd(a.numerator, a.denominator);

    a.numerator = a.numerator / numGcd;
    a.denominator = a.denominator / numGcd;

    return a;

}


//this method gets the GCD of any fraction sent
//A- numator   B- denimtor
//RETURN- the GCD of 2 numbers
int gcd (int a, int b){
    if (a == 0){
        return b;
    }

    return gcd (b%a, a);
}


//this will add 2 fractions together and return the result
fraction add_fraction(fraction f1, fraction f2){
    int f1D = f1.denominator;
    int f2D = f2.denominator;

    fraction newF = {0,0};

    f1.numerator = f1.numerator * f2D;
    f1.denominator = f1.denominator * f2D;

    f2.numerator = f2.numerator * f1D;
    f2.denominator = f2.denominator * f1D;

    newF.numerator = f1.numerator + f2.numerator;
    newF.denominator = f1.denominator;

    newF = reduce(newF);

    return newF;
}


//will take 2 fractoins and multpily them together, then reduce them down and return that fraction
fraction multiply_fraction(fraction f1, fraction f2){

    fraction newF = {0,0};

    newF.numerator = f1.numerator * f2.numerator;
    newF.denominator = f1.denominator * f2.denominator;

    newF = reduce(newF);

    return newF;
}


//will take 2 fractions and divide them and then reduce it and return back that fraction
fraction divide_fraction(fraction f1, fraction f2){

    fraction newF = {0,0};
    int temp = 0;

    temp = f2.numerator;
    f2.numerator = f2.denominator;
    f2.denominator = temp;

    newF = multiply_fraction(f1, f2);

    return newF;
}


void print(fraction a){

    printf("  %3i \n", a.numerator);
    printf(" -------\n");
    printf("  %3i \n", a.denominator);
}

