#include <stdio.h>

int isPrime(int n) {
    if (n <= 1) {
        return 0; // Not prime
    }
    for (int i = 2; i * i <= n; i++) { // Check up to the square root of n
        if (n % i == 0) {
            return 0; // Not prime
        }
    }
    return 1; // Prime
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int num;
        scanf("%d", &num);
        printf("%d\n", isPrime(num));
    }
    return 0;
}