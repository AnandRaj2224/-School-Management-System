#include "school.h"

School *schoolCreation() {

    School *newSchool = malloc(sizeof(School));

    printf("enter the School Name :\t");
    fgets(newSchool->schoolName,sizeof(newSchool->schoolName),stdin);
    printf("enter the total Number of courses in the school :\t");
    scanf("%d",&newSchool->totalCourses);

    newSchool->courses =  (Student*)malloc(sizeof(Student)*(newSchool->totalCourses));

    for(int i = 0; i < newSchool->totalCourses; i++) {
        
        newSchool->courses[i] =  *(courseCreation());
    }
    return newSchool;
}

void printSchool (School *school) {

    printf("the School details are as follows :\n");
    printf("SCHOOL NAME : %s \t",school->schoolName);
    printf("TOTAL COURSES : %d \t",school->totalCourses);

    printf("the courses in the school : \n");
    for(int i = 0; i < school->totalCourses; i++) {
        printCourse(&school->courses[i]);
    }
}