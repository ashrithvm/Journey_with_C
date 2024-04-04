///@brief: To understand the theory and use of 'un-initialized' , 'null' , 'void*' and 'function' pointers

#include <stdio.h>

int add(int x, int y){
    return (x+y);
}

int main(){
    int *ptr; //uninitialized pointer (unstable)
    int *ptr2=NULL; //null pointer (safe)

    void *ptr3=NULL; //when we dont know what type is stored in the address stored in ptr3

    int (*ptr4)(int, int) = add;//function pointer, points to the function add
    int sum=(*ptr4)(3,4);

    // we CANNOT do (int*) ptr3 = ptr4; for some reason 
    printf("sum: %d", sum);
}

/**
 * My Learnings:
 * 
 * Do not leave/use uninitialized pointers
 * 
 * Function pointer definition is in the following format:
 * <func. return type> (*ptrName) (<dataType of func. param>) = (function name)
 * 
 * int (*pAdd) (int, int) = add;
 * (*pAdd)(x, y)
*/