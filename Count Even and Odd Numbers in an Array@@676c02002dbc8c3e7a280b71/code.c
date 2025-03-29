#include <stdio.h>

int main() {
    int n, oddCount = 0, evenCount = 0;
    
  
    scanf("%d", &n);
    
    int arr[n];
    
    // Input elements of the array
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Count odd and even numbers
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
    
    // Output the result in the desired format
    printf( "%d %d ", evenCount, oddCount );
    
    return 0;
}