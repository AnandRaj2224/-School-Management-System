/*file for the student structure and function declearations*/

// file guards -- if not define the header file then define it or else skip it.
#ifndef STUDENT_H 
#define STUDENT_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct student {

    char name[25];
    int id;
} Student;

Student *studentCreation ();

#endif