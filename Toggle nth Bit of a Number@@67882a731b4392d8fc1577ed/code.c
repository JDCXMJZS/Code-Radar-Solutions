#include <stdio.h>

int main() {
    int number, n, updatedNumber;
    scanf("%d", &number);
    scanf("%d", &n);
    updatedNumber = number ^ (1 << n);
    printf("%d\n",updatedNumber);

    return 0;
}
