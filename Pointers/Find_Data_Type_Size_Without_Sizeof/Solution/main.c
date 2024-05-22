/* Write a program to find the size of a data type without using the `sizeof` operator, use pointer arithmetic.

WTD: Declare a pointer to the given type and increment it. Subtract the original pointer value from the incremented value to get the size.

(e.g.: I/P: int, O/P: 4( based on platform)) */

#include <stdio.h>

int main(){

    // 1. create a pointer of the desired data type
    int *ptr = 0;

    // 2. increment the ptr
    ptr++;

    // 3. print the pointer value using %p specifier
    printf("%p",ptr);

    return 0;
}