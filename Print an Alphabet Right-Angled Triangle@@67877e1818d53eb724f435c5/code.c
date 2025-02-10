#include <stdio.h>
int main() {
    int x;
    scanf("%d",&x);
    for(int i=0;i<x;i++){
        for(int v=0;v<i+1;v++){
            printf("%C",65+v);
        }
        printf("\n");
    }
    return 0;
}