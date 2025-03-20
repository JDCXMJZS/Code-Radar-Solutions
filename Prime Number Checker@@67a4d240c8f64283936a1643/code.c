#include <stdio.h>
#include <math.h>  // For sqrt() function

// Function to check if a number is prime
int CheckPrime(int n) {
    if (n <= 1) {
        return 0;  // 1 or lower are not prime
    }
    for (int i = 2; i <= sqrt(n); i++) {  // Only check up to sqrt(n)
        if (n % i == 0) {
            return 0;  // Not a prime number
        }
    }
    return 1;  // It's a prime number
}

int main() {
    int x, result;
    
    // Reading the number of test cases
    scanf("%d", &x); 
    
    for (int j = 0; j < x; j++) {
        int z;
        
        // Reading the number to be checked for primality
        scanf("%d", &z);
        
        // Checking if the number is prime
        result = CheckPrime(z);
        
        // Output 1 if prime, 0 if not prime
        printf("%d\n", result);  // Directly print the result (1 or 0)
    }
    
    return 0;
}
