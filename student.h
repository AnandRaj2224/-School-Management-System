/*file for the student structure and function declearations*/

// file guards -- if not define the header file then define it or else skip it.
#ifndef STUDENT_H 
#define STUDENT_H

typedef struct student {

    char name[25];
    int id;

} Student;

/*Create a Student: Takes user input for student details, allocates a new student struct 
in memory, and populates the struct with the provided details.*/

Student createStudent();

#endif