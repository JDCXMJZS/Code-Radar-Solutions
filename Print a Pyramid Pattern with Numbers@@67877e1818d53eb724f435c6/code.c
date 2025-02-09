#include <stdio.h>
int main() {
    int x;
    scanf("%d",&x);
    for(int i=0;i<x;i++){
        for(int j=x;j>i;j--){
            printf("-");
        }
        for(int k=1;k<=i+1;k++){
            printf("%d",k);
        }
        printf("\n");
    }
    return 0;
}