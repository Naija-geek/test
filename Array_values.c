//Write a program to input values into an array and display them
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *a;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    a = (int *) malloc(n * sizeof(int));

    if (a == NULL) {
        printf("Error allocating memory.\n");
        exit(1);
    }

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("The entered integers are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    free(a);
    return 0;
}