#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if(a%2==0){
        printf("Positive");
    }
    else if(a==0){
        printf("Negative");
    }
    else{
        printf("Negative")
    }
    printf("%s", welcome());
    return 0;
}