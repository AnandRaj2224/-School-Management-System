#ifndef SCHOOL_H
#define SCHOOL_H

#include "Course.H"

typedef struct school {
    char schoolName[30];
    Course *courses;
} School;

#endif