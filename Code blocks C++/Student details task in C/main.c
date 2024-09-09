#include <stdio.h>

struct Course{
    char[30] course_code;
    char[30] course_name;

};
struct Grade {
    int mark;
    char the_grade;
};

struct Student {
    char[30] registration_number;
    char{50} name;
    int age;
    Course course;
    Grade grades;
};

const int MAX_STUDENTS = 40;
const grade;
Student students[MAX_STUDENTS];
int totalStudents = 0;

// Implement functions to add, edit, and calculate grades for students.
int getGrade(){
int marks;

if (marks > 69) return 'A';
else if (marks < 70 && marks > 59) return 'B';
else if (marks < 60 && marks > 49) return 'C';
else if (marks < 50 && marks > 39) return 'D';
else return 'E';
}
int main() {

    return 0;
}
