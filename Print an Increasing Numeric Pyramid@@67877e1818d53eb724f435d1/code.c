#include <stdio.h>
int main() {
    int x;
    scanf("%d",&x);
    for(int i=0;i<x;i++){
        for(int j=x;j>i;j--){
            printf("-");
        }
        for(int y=1;y<=i+1;y++){
            printf("%d",y);
        }
        printf("\n");
    }
    return 0;
}