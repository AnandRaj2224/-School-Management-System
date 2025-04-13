#ifndef SCHOOL_H
#define SCHOOL_H

#include "Course.c"

typedef struct school {
    char schoolName[30];
    int totalCourses;
    Course *courses;
} School;

School *schoolCreation();

void printSchool (School *school);

void checkStudentPresentInSchool (School *school, int id);

void printStudentCourses (School *school, int id);

#endif