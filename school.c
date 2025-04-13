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

void checkStudentPresentInSchool (School *school, int id) {
    int i,j;

    for(i = 0; i < school->totalCourses; i++) {
        for(j = 0; j <school->courses[i].totalStudentsInCourse; j++) {
            if(school->courses[i].studentsInCourse[j].id == id) {
            printf("YES STUDENT %s  WITH ID %d IS PRESENT IN THIS SCHOOL\n",school->courses[i].studentsInCourse[j].name,id);
            } else {
                printf("NO STUDENT WITH ID %d IS NOT PRESENT IN THIS SCHOOL\n",id);
            }
        }
    }
}