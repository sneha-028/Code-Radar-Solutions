#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    if (a!=b && a!=c && b!=c)
    {
        printf("Scalene");

    }
    else if (a==b==c)

    {
        printf("Equilateral");
    }
    else {
        printf("Isosceles");
    }
    return 0;
}