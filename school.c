#ifndef SCHOOL_C
#define SCHOOL_C

#include "school.h"

void schoolCreation(School *s) {

    printf("enter the School Name :\t");
    fgets((*s).schoolName,sizeof((*s).schoolName),stdin);
    printf("enter the total number of Courses\t");
    scanf("%d",&(*s).totalCourses);

    (*s).courses = (Course*)malloc(sizeof(Course)*((*s).totalCourses));

}
#endif