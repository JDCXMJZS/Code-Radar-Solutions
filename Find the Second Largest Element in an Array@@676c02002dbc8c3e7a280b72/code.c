#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n == 1) {
        printf("-1");
        return 0;
    }

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find the largest and second largest distinct elements
    int largest = arr[0], second_largest = -1;

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] < largest && (second_largest == -1 || arr[i] > second_largest)) {
            second_largest = arr[i];
        }
    }

    printf("%d", second_largest);
    return 0;
}
