#include <stdio.h>

void checkMSB(int number) {
    if (number & (1 << 31)) {
        printf("Set\n");
    } else {
        printf("Not Set\n");
    }
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    checkMSB(number);
    return 0;
}
