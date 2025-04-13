#ifndef COURSE_H
#define COURSE_H

#include "student.c" // include the student file for the student datatype.

typedef struct course {

    char courseName[50];
    int passingGrades;
    double averageGrades;
    int totalStudentsInCourse;
    Student *studentsInCourse;

} Course;

Course *courseCreation ();

#endif