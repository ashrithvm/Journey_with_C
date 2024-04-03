//Objective: Learn how pointers work
//manual: gcc pointers.c -o pointers
#include <stdio.h>

void pointerTest();
void arrayTest();

int main(){
    //pointerTest();
    arrayTest();
}

/// @brief Testing how basic pointers work
void pointerTest(){
    int n; //declare variable 'n' as an integer
    int* ptr; //declare that item at <ptr> address is an integer

    n= 46; // give value to n
    ptr= &n;// pointer 'ptr' points to address of 'n'

    printf("var: %d, ptr: %d\n",n, *ptr);
    *ptr=99;//change value of item at <ptr> address

    printf("var: %d, ptr: %d\n", n, *ptr);
}

/// @brief Testing how a basic array declaration and indexing work
void arrayTest(){
    float arr[5]={1.1,2.2,3.3,4.4,5.5};
    float* ptr = &arr[0];
    printf("%f\n",*ptr);
    printf("%f\n",*(ptr+1));
}