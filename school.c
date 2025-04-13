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