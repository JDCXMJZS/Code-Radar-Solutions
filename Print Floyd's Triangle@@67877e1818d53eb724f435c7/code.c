// #include <stdio.h>
// int main() {
//     int x,num=1;
//     scanf("%d",&x);
//     for(int i=1;i<x+1;i++){
//         for(int j=1;j<i+1;j++){
//             printf("%d ",num);
//             num++;
//         }
//         printf("\n");
//     }
//      return 0;
// }

#include<stdio.h>
int main(){
    int n,x=1;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            printf("%d ",x);
            x+=1;
        }
        printf("\n");
    }
    return 0;
}