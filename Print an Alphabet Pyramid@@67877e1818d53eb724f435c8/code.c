// #include <stdio.h>
// int main() {
//     int x;
//     scanf("%d",&x);
//     for(int i=0;i<x;i++){
//         for(int j=0;j<i+1;j++){
//             printf("%C ",j+65);
//         }
//         printf("\n");
//     }
//     return 0;
// }
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            printf("%c ",65+j);
        }
        printf("\n");
    }
    return 0;
}