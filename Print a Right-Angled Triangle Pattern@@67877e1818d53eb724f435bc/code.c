// #include <stdio.h>
// int main() {
//     int a;
//     scanf("%d",&a);
//     for(int i=0;i<a;i++){
//         for(int j=0;j<i+1;j++){
//             printf("* ");
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
            printf("%* ");
        }
        printf("\n");
    }
}