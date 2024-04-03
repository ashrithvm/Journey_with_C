/// @brief: Practice using structs and pointer arithmetic

#include <stdio.h>
#include <string.h>

/// Following are 2 ways to do the same thing

// struct Student
// {
//     char id[10];
//     float gpa;
// };

// int main(){
//     struct Student studentList[100];
//     strcpy(studentList[0].id,"avm1998");
//     studentList[0].gpa=3.92;
//     printf("%s", studentList[0].id);

// }

struct Student
{
    /* data */
    char* id[10];
    float gpa;
};

int main(){
    struct Student studentList[100];
    char* id1="avm1998";
    studentList->id[0] = id1;
    printf("%s", studentList->id[0]);
}
