#include <stdio.h>

int main() {
    int n, k;

    // Input size of the array
    scanf("%d", &n);

    int arr[n];

    // Input the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the number of steps to rotate
    scanf("%d", &k);

    // Normalize k (to avoid unnecessary rotations)
    k = k % n;

    // Rotate the array to the right by k steps
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[(n - k + i) % n]);
    }

    return 0;
}
