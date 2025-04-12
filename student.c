#ifndef STUDENT_C
#define STUDENT_C

#include <stdio.h>
#include <string.h>
#include "student.h"
Student createStudent () {

    Student s;
    printf("NAME :\t");
    fgets(s.name, sizeof(s.name),stdin);
    prinf("ID :\t");
    scanf("%d",&s.id);

    return s;
}

#endif