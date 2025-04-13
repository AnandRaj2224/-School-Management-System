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

void printCourse (Course *course) {

    printf("the course details are as follows :\n");
    printf("COURSE NAME : %s \t",course->courseName);
    printf("PASSING GRADES : %d \t",course->passingGrades);
    printf("AVERAGE GRADES :%.2lf \t",course->averageGrades);
    printf("TOTAL STUDENTS : %d \t",course->totalStudentsInCourse);

    printf("the students in the course : \n");
    for(int i = 0; i < course->totalStudentsInCourse; i++) {
        printStudent(&course->studentsInCourse[i]);
    }
}