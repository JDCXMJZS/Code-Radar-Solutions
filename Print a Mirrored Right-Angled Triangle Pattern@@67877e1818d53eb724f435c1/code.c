// #include <stdio.h>
// int main() {
//     int x;
//     scanf("%d",&x);
//     for(int i=1;i<=x;i++){
//         for(int j=x;j>i;j--){
//             printf(" ");
//         }
//         for(int k=1;k<=i;k++){
//             printf("*");
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
        for(int j=n-1;j>i;j--){
            printf(" ");
        }
        for(int x=0;x<i+1;x++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}