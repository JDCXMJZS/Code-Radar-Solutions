// #include <stdio.h>
// int main() {
//     int x;
//     scanf("%d",&x);
//     for(int i=x;i>0;i--){
//         for(int j=1;j<=i;j++){
//             printf("%d ",j);
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
        int x=1;
        for(int j=n;j>i;j--){
            printf("%d",x);
            x+=1;
        }
        return 0;
    }
}