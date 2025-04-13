#include "student.h"

Student *studentCreation () {

    Student *student = malloc(sizeof(Student));
    printf("enter the student Details\n");
    printf("enter the student Name :\t");
    fgets(student->name,sizeof(student->name),stdin);
    printf("enter the ID :\t");
    scanf("%d",&student->id);

    return student;
}
