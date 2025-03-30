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
int main() {
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        // Print spaces
        for(int j = 0; j < n - i; j++) {
            printf(" ");
        }
        // Print increasing numbers
        for(int x = 1; x <= i; x++) {
            printf("%d", x);
        }
        // Print decreasing numbers
        for(int z = i; z >= 1; z--) {
            printf("%d", z);
        }
        printf("\n");
    }
    return 0;
}