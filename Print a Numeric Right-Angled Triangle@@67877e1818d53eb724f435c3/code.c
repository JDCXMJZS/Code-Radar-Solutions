// #include <stdio.h>
// int main() {
//     int n;
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
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
        for(int j=0;j<i+1;j++){
          printf("%d ",x);
          x+=1;  
        }
        printf("\n");
    }
    return 0;
}