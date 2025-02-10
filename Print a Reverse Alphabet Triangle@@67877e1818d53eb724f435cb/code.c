#include <stdio.h>
int main() {
    int x,num=1;
    scanf("%d",&x);
    for(int i=0;i<x;i++){
        for(int j=x;j>0;j--){
            printf("%C",65+num);
            num++;
        }
        num=1;
        printf("\n");
    }
    return 0;
}