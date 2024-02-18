//What is a pointer? Hence, write a C program to declare a variable of your choice, declare a pointer to the variable, and assign a value to the variable. Print out the assigned value using the pointer and print out the memory address where the value is stored
#include <stdio.h>

int main() {
    int x = 5;
    int *ptr;

    ptr = &x;

    printf("Value of x: %d\n", x);
    printf("Address of x: %p\n", &x);
    printf("Value of ptr: %d\n", *ptr);
    printf("Address of ptr: %p\n", ptr);

    return 0;
}