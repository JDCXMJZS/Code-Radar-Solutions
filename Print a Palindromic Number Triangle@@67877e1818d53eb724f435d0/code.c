// #include <stdio.h>
// int main() {
//     int x;
//     scanf("%d",&x);
//     for(int i=1;i<=x;i++){
//         for(int j=x;j>i;j--){
//             printf(" ");
//         }
//         for(int z=1;z<=i;z++){
//             printf("%d",z);
//         }
//         for(int w=i-1;w>0;w--){
//             printf("%d",w);
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
        for(int j=1;j<n-i;j++){
            printf("-");
        }
        for(int j=1;j<=i+1;j++){
            printf("%d",j);
        }
        for(int x=i+1;x>=1;x--){
            printf("%d",x);
        }
        printf("\n");
    }
    return 0;
}