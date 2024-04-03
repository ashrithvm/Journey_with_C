//Objective: Learn how pointers work
//manual: gcc pointers.c -o pointers
#include <stdio.h>

int main(){
    int n; //declare variable 'n' as an integer
    int* ptr; //declare that item at <ptr> address is an integer

    n= 46; // give value to n
    ptr= &n;// pointer 'ptr' points to address of 'n'

    printf("var: %d, ptr: %d\n",n, *ptr);
    *ptr=99;//change value of item at <ptr> address

    printf("var: %d, ptr: %d\n", n, *ptr);

}