#include <stdio.h>
int main() {
    int x,num=1;
    scanf("%d",&x);
    for(int i=0;i<x;i++){
        for(int j=0;j<i+1;j++){
            printf("%d ",num);
            num=1;
        }
        num=0;
        printf("\n");
    }
    return 0;
}