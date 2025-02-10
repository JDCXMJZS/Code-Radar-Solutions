#include <stdio.h>
int main() {
    int x;
    scanf("%d",&x);
    for(int i=0;i<x;i++){
        for(int v=0;v<i+1;v++){
            printf("%d",65+v);
        }
    }
    return 0;
}