// #include <stdio.h>
// int main() {
//     int n;
//     scanf("%d",&n);
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(i==0 || i==n-1 ||j==0||j==n-1){
//                 printf("*");
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i=1 || i=n ){
            for(int j=0;j<n;j++){
                printf("*");
            }}
        else{
            for(int x=1;x<=n;x++){
                if(x=1 ||x=n){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
        }
    }
    return 0;
}

