#include <stdio.h>
int main() {
    int x;
    scanf("%d";&x);
    for(int i=1;i<=x;i++){
        for(j=i+1;j<=x;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}