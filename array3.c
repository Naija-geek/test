// Declare an array with the name SHOPPING LIST and size 10 and assign multiples of 3
#include <stdio.h>

int main() {
    int i;
    int SHOPPING_LIST[10] = {0};

    for (i = 0; i < 10; i++) {
        SHOPPING_LIST[i] = i * 3;
    }

    for (i = 0; i < 10; i++) {
        printf("%d ", SHOPPING_LIST[i]);
    }
    return 0;
}