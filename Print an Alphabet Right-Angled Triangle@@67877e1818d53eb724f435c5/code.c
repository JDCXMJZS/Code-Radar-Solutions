#include <stdio.h>
int main() {
    int x;
    scanf("%d",&x);
    for(int i=0;i<x;i++){
        printf("%C",i+65);
    }
    return 0;
}