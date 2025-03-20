#include<stdio.h>

int CheckPrime(int n){
    if(n == 1){
        return 0; // 1 is not a prime number
    }
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            return 0; // Not Prime
        }
    }
    return 1; // Prime
}

int main(){
    int x, result;
    scanf("%d", &x); // Input the number of test cases
    for(int j = 0; j < x; j++){
        int z;
        scanf("%d", &z); // Input number to check
        result = CheckPrime(z); // Call CheckPrime function
        if(result == 1){
            printf("%d", 1); // Print 1 for Prime
        }
        else{
            printf("%d", 0); // Print 0 for Not Prime
        }
        printf("\n");
    }
    return 0;
}
