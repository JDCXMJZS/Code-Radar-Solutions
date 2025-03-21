#include <stdio.h>

int main() {
    int number, position = 0;
    scanf("%d", &number);

    while ((number & 1) == 0 && number != 0) {
        number = number >> 1; 
        position++; 
    }
    if (number == 0)
        printf("No set bit found.\n"); 
    else
        printf("%d\n", position);

    return 0;
}
