#include <stdio.h> 
#include <stdlib.h>

struct student{
    char name[80];
    int age;
    float pctg;
};

struct student* emp = NULL;

int main()
{
    emp = (struct student*)
        malloc(sizeof(struct student));
    

    emp -> age = 20;

    printf("%d", emp->age);

}