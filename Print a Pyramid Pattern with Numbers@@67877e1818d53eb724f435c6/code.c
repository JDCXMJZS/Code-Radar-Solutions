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
        int z=1;
        for(int j=n-1;j>i;j--){
            printf(" ");
        }
        for(int x=0;x<i+1;i++){
            printf("%d",z);
            z+=1;
        }
        printf("\n");
    }
    return 0;
}