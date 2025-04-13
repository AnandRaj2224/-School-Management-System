# include "school.c"

int main () {

    School *school = schoolCreation();

    printSchool (school);
    checkStudentPresentInSchool (school, 3062);
    printStudentCourses (school,3062);

    printCourse (&school->courses[0]);
    checkStudentPresentInCourse (&school->courses[0],3062); 

    free(school);
    return 0;
}