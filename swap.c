//Write a C function to swap two number
// #include <stdio.h>

// void swap(int *a, int *b) {
//   int temp = *a;
//   *a = *b;
//   *b = temp;
// }

// int main() {
//   int a = 10, b = 20;
//   swap(&a, &b);
//   printf("a = %d, b = %d\n", a, b);
//   return 0;
// }
#include <stdio.h>

int main(){
int a = 5, b = 2;
int t = a;
a = b;
b = t;
printf("%d %d", a, b);

}