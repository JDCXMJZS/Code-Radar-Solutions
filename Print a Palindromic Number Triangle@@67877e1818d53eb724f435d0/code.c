#include <stdio.h>
int main() {
    int x;
    scanf("%d",&x);
    for(int i=x;i<x;i++){
        for(int j=x;j>i;i--){
            printf("-");
        }
        printf("\n");
    }
    return 0;
}