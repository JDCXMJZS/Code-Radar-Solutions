// #include <stdio.h>
// int main() {
//     int x;
//     scanf("%d",&x);
//     for(int i=0;i<x;i++){
//         for(int j=x-1;j>i;j--){
//             printf(" ");
//         }
//         for(int k=1;k<=i+1;k++){
//             printf("%d ",k);
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
        for(int j=n;j>i;j--){
            printf("-");
        }
        printf("\n");
    }
    return 0;
}