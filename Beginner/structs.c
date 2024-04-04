/// @brief: Practice using structs and pointer arithmetic

#include <stdio.h>
#include <string.h>

typedef struct
{
    /* data */
    int id;
    char name[10];
} Student;

int main() {
    Student s1;
    s1.id=1;
    strcpy(s1.name,"ashrith");
    printf("id: %d, name: %s\n", s1.id, s1.name);
}

/**
 * My Learnings:
 * 
 * using typedef for to declare structs is always better.
 * if declared using typedef, we can just use 'Student s1' instead of 'struct Student s1'
 * 
 * when you need to use data from a struct, there's 2 different sytax for different cases:
 * 
 * if s1 is defined as a Student s1:
 * (we use '.')
 * Ex. s1.id; s1.name
 * 
 * if s1 is defined as a Student* s1;
 * (we use '->')
 * !!! To actually use pointer to struct, first assign dynamic memory (i.e. malloc() or something)
 * After assigning memory (Employee* e1=malloc(sizeof(Employee)))
 * e1->id=12;
*/