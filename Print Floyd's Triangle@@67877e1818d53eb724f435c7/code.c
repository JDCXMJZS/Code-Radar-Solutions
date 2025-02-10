#include <stdio.h>
int main() {
    int x,num=1;
    scanf("%d",&x);
    for(int i=1;i<x+1;i++){
        for(int j=1;j<i+1;j++){
            printf("%d ",num);
            num++;
        }
        printf("\n");
    }
     return 0;
}