// #include <stdio.h>
// int main() {
//     int n;
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=n;j>i;j--){
//             printf(" ");
//         }
//         for(int k=1;k<=(2*i-1);k++){
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
    for(int i=1;i<=n;i++){
        for(int j=n;j>i;j--){
            printf(" ");
        }
        for(int x=0;x<2*i-1;x++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}