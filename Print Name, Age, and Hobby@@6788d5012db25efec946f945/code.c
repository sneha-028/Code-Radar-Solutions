#include <stdio.h>


int main() {
    char name [50];
    int age;
    char hobby [50];
    scanf("%s %d %s",&name,&age,&hobby);
    printf("Name: %s",name);
    printf("\n Age: %d",age);
    printf("\n Hobby: %s",hobby);
    return 0;
}