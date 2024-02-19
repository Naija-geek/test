#include <stdio.h>;

int main(){
    int age;
    printf("What is your age");

    scanf("%d", &age);

    if (age >= 18){
        printf("You can log in now");
    }
    else{
        printf("You can not log in");
    }
    return 0;
}