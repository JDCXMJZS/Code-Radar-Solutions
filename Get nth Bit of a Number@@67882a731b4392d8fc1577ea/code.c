#include <stdio.h>

int main() {
    int number, n, bitValue;
    scanf("%d", &number);
    scanf("%d", &n);
    bitValue = (number >> n) & 1;

    // Displaying the result
    printf("%d",bitValue);

    return 0;
}
