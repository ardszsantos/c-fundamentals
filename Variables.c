#include <stdio.h>

int main(){
    int x;
    x = 123;
    int y = 321;

    int age = 21;
    float gpa = 2.05;

    char grade = 'C';
    char name[] = "Bro"; 



    printf("Hello %s\n", name);
    printf("You are age %d years old\n", age);
    printf("Your avarage grade is %c", grade);
    printf("Your gpa is %f\n", gpa);

    return 0;
}