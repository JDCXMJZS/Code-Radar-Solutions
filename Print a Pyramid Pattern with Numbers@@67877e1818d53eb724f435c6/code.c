#include <stdio.h>
int main() {
    int x;
    scanf("%d",&x);
    for(int i=0;i<x;i++){
        for(int j=x;x>i;j--){
            printf("-");
        }
        printf("\n");
    }
    return 0;
}