#include <stdio.h>

int main() {
    int n, i, j;
    scanf("%d", &n);
    int arr[n];

    // Read the array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Print frequency of each unique element
    for (i = 0; i < n; i++) {
        int count = 1;  // Count the current element
        if (arr[i] == -1) {  // Skip if the element is already counted
            continue;
        }
        // Count how many times arr[i] appears in the array
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                arr[j] = -1;  // Mark this element as counted
            }
        }
        // Print the element and its frequency
        printf("%d %d\n", arr[i], count);
    }

    return 0;
}
