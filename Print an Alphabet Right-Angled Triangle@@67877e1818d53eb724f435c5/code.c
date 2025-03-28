// #include <stdio.h>
// int main() {
//     int x;
//     scanf("%d",&x);
//     for(int i=0;i<x;i++){
//         for(int v=0;v<i+1;v++){
//             printf("%C ",65+v);
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
            int x=67;
            printf("%c ",97+j);
        }
        printf("\n");
    }
    return 0;
}