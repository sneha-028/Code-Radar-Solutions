#include <stdio.h>

int main() {
    int i,j,a;
    scanf("%d",&a);
    for (i=a;i>0;i--)
    {
        for (j=a;j>i;j--){
        printf("*");
    }
    printf("\n");
    }
    
    }
    return 0;
}