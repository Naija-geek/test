#include <stdio.h>;

int main(){
    char fname[26];
    // char sname[25];

    printf("What is your first name?");
    scanf("%s", &fname);
    // printf("What is your second name?");
    // scanf("%s", &sname);
    // fgets(fname, 25, stdin);
    //fgets(name, 10, stdin);

    printf("Your name is %s", fname);
    return 0;
}