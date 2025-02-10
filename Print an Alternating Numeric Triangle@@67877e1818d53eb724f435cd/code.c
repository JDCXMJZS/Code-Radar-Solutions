#include <stdio.h>
int main() {
    int x,num=0;
    scanf("%d",&x);
    for(int i=0;i<x;i++){
        for(int j=0;j<i+1;j++){
            printf("%d",num);
            num=0;
        }
        num=1;
    }
    printf("\n");
    return 0;
}