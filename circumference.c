#include <stdio.h>
#include <math.h>;

int main(){
    const double PI = 3.14159265;
    double radius;
    double circumference;
    printf("Enter your radius");
    scanf("%lf", &radius);

circumference = 2 * PI * radius;

    printf("Your circumference is %lf", circumference);
    return 0;
}