#include <stdio.h>

int countLeadingZeros(int number) {
    int count = 0;

    for (int i = 31; i >= 0; i--) {
        if ((number >> i) & 1) {
            break;
        }
        count++;
    }

    return count;
}

int main() {
    int number;
    scanf("%d", &number);
    int leadingZeros = countLeadingZeros(number);
    printf("%d\n", leadingZeros);
    return 0;
}
