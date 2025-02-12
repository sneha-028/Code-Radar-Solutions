 #include <stdio.h>

int main() {
    int a, i, j;
    
    // Take input from the user for the number of rows
    scanf("%d", &a);
    
    // Outer loop controls the number of rows
    for (i = 1; i <= a; i++) {
        // Inner loop prints '*' for each row
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        // After each row, print a newline character to move to the next row
        printf("\n");
    }

    return 0;
}
