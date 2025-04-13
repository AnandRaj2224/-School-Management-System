#include "student.h"

Student *studentCreation () {

    Student *student = malloc(sizeof(Student));
    printf("enter the student Details\n");
    printf("enter the student Name :\t");
    fgets(student->name,sizeof(student->name),stdin);
    printf("enter the ID :\t");
    scanf("%d",&student->id);
    getchar();
    return student;
}


void printStudent (Student *student) {

    printf("the student details is as follows :\n");
    printf("NAME :%s\n",student->name);
    printf("ID : %d \n",student->id);
}