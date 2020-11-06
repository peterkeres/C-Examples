//
//  main.c
//  project_2
//
//  Created by peter k on 2/17/19.
//  Copyright © 2019 peter k. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct HealthProfile
{
    char name[100];
    char id[100];
    char gender[10];
    char birthMonth[100];
    char birthDay[100];
    char birthYear[100];
    struct HealthProfile * mySelf;
}HealthProfile;


void setName (HealthProfile * const ptrPatient);
void setID (HealthProfile * const ptrPatient);
void setGender (HealthProfile * const ptrPatient);
void setBirth (HealthProfile * const ptrPatient);


int main(int argc, const char * argv[]) {
    puts("\n\nPROGRAM START\n");
    
    
    HealthProfile * ptrPatientA = (HealthProfile *) malloc(2 * sizeof(HealthProfile));
 
    setName(ptrPatientA);
    setID(ptrPatientA);
    setGender(ptrPatientA);
    setBirth(ptrPatientA);
    
    puts("\n\n the following is what is stored in the struct for patient a:");
    printf("NAME: %s\n", ptrPatientA->name);
    printf("ID: %s\n", ptrPatientA->id);
    printf("GENDER: %s\n", ptrPatientA->gender);
    printf("BIRTH MONTH: %s\n", ptrPatientA->birthMonth);
    printf("BIRTH DAY: %s\n", ptrPatientA->birthDay);
    printf("BIRTH YEAR: %s\n", ptrPatientA->birthYear);
    
    
    puts("\n\nPROGRAM END");
    return 0;
}


void setName (HealthProfile * const ptrPatient)
{
    char buffer[100];
    puts("Please enter the name of the patient");
    gets(buffer);
    
    strcpy(ptrPatient->name,buffer);
}


void setID (HealthProfile * const ptrPatient)
{
    char buffer[100];
    puts("Please enter the ID of the patient");
    gets(buffer);
    
    strcpy(ptrPatient->id,buffer);
}


void setGender (HealthProfile * const ptrPatient)
{
    char buffer[10];
    puts("Please enter the gender of the patient");
    gets(buffer);
    
    strcpy(ptrPatient->gender,buffer);
}


void setBirth (HealthProfile * const ptrPatient)
{
    puts("Please enter the birth in the following format");
    char buffer[100];
    
    puts("the month");
    gets(buffer);
    strcpy(ptrPatient->birthMonth,buffer);
    
    puts("the day");
    gets(buffer);
    strcpy(ptrPatient->birthDay,buffer);
    
    
    puts("the Year");
    gets(buffer);
    strcpy(ptrPatient->birthYear,buffer);
    
}

