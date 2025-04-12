#include "student.h"
#include "student.c"
#include "course.h"
//#include "course.c"
#include "school.h"
//#include "school.c"
#include <stdlib.h>

int main () {

    int i,j,totalStudents;

    printf("enter the total number of students\n");
    scanf("%d",&totalStudents);

    Student *students = (int*)malloc(sizeof(Student)*totalStudents);

    for(i = 0; i < totalStudents; i++) {
        printf("enter the student details for student %d:\n",i+1);
        students[i] = createStudent();
    }
}