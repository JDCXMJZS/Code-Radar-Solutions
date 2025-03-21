#include <stdio.h>

int main() {
    int number, n, bitValue;
    scanf("%d %d", &number, &n);

    bitValue = (number >> n) & 1;
    printf("%d\n",bitValue);
    return 0;
}
