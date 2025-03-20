#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int target;
    scanf("%d", &target);

    // Check if the target index is within bounds
    if(target >= 0 && target < n) {
        printf("%d", arr[target]);
    } else {
        printf("Invalid target index");
    }
    return 0;
}
