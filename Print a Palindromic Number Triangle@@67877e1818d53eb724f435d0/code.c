#include <stdio.h>
int main() {
    int x;
    scanf("%d",&x);
    for(int i=0;i<x;i++){
        for(int j=x;j>i;j--){
            printf("-");
        }
        printf("1\n");
    }
    return 0;
}