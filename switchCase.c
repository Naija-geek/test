#include <stdio.h>

int main(){
    char grade;

printf ("enter your grade");
scanf("%d", &grade );
 
    switch(grade)
    {
        case 'A':
            printf("you passed the grade");
            break;
        case 'B':
            printf("you got a b");
            break;
        case 'C':
            printf("you got a c");
            break;
        default:
            printf("not known");
    }
}