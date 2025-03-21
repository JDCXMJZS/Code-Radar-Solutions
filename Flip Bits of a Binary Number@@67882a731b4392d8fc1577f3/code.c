#include <stdio.h>

int main() {
    int number, flippedNumber;
    scanf("%d", &number);
    flippedNumber = ~number;
    printf("%d\n", flippedNumber);

    return 0;
}
