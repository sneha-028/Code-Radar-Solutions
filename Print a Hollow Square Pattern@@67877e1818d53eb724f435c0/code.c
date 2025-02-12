#include <stdio.h>
int main () {
    int a,i,j;
    scanf("%d",&a);
    for (i=0;i>=a;i++)
    {
        for (j=0;j>=i;j++)
        printf(*);
        if (j==0||j==a-1) {
            printf("*");
            else (
                print(" ");
            )
        }
    }
    return 0;
}