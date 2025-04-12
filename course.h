#ifndef COURSE_H
#define COURSE_H

#include "student.H" // include the student file for the student datatype.

typedef struct course {

    char courseName[50];
    double averageGrades;
    int totalStudents;
    Student *students;

} Course;

#endif