//Write a C program to print all the multiples of 5 between 1 and 100 in descending order
#include <stdio.h>

int main() {
    int i;
    for (i = 100; i >= 1; i--) {
        if (i % 5 == 0) {
            printf("%d ", i);
        }
    }
    return 0;
}