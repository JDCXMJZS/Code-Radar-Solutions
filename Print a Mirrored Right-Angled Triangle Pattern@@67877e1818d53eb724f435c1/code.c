#include <stdio.h>
int main() {
    int x;
    scanf("%d",&x);
    for(int i=0;i<x;i++){
        for(int j=x;j>i;j--){
            printf("-");
        }
        for(int k=0;k<x;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}