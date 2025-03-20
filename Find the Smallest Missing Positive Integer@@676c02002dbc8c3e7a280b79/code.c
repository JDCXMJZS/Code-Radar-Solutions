#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Loop to find the missing number
    for (int x = 0; x < n - 1; x++) {
        // Check if there's a break in the sequence
        if (arr[x + 1] != arr[x] + 1 && arr[x + 1] != arr[x] - 1) {
            // Determine and print the missing number
            if (arr[x + 1] > arr[x]) {
                printf("%d\n", arr[x] + 1); // Ascending sequence
            } else {
                printf("%d\n", arr[x] - 1); // Descending sequence
            }
            break;
        }
    }

    return 0;
}
