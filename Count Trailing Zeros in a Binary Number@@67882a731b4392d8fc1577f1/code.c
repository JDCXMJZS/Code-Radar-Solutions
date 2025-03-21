#include <stdio.h>

int countTrailingZeros(int number) {
    int count = 0;
    while ((number & 1) == 0 && number != 0) {
        count++;
        number = number >> 1; 
    }

    return count;
}

int main() {
    int number;
    scanf("%d", &number);
    int trailingZeros = countTrailingZeros(number);

    // Outputting the result
    printf("%d\n", trailingZeros);

    return 0;
}
