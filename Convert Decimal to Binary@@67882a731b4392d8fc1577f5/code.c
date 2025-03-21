#include <stdio.h>

void decimalToBinary(int number) {
    if (number == 0) {
        printf("0");
        return;
    }
    
    int binary[32];
    int i = 0;

    while (number > 0) {
        binary[i] = number % 2;
        number = number / 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
}

int main() {
    int number;
    scanf("%d", &number);
    decimalToBinary(number);

    return 0;
}
