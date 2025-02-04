#include <stdio.h>


int main() {
    int a,b;
    scanf("%d &d",&a,&b);
    if (a>b)
    { 
        printf("First");
    }
    else if (b==a)
    {
        printf("Equal");
    }
    else {
        printf("Second");

    }
    
    return 0;
}