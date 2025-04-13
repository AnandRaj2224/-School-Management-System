#include "course.h"

/*function for creating a course structure with details*/
Course *courseCreation () {

    Course *newCourse = malloc(sizeof(Course));
    printf("enter the course Name :\t");
    fgets(newCourse->courseName,sizeof(newCourse->courseName),stdin);
    printf("enter the passing grades in the course :\t");
    scanf("%d",&newCourse->passingGrades);
    printf("enter the average grades in the course :\t");
    scanf("%lf",&newCourse->averageGrades);
    printf("enter the total Number of students in the course :\t");
    scanf("%d",&newCourse->totalStudentsInCourse);

    newCourse->studentsInCourse =  (Student*)malloc(sizeof(Student)*(newCourse->totalStudentsInCourse));

    for(int i = 0; i < newCourse->totalStudentsInCourse; i++) {
        
        newCourse->studentsInCourse[i] =  *(studentCreation());
    }
    return newCourse;
}