// #include <stdio.h>
// int main() {
//     int a;
//     scanf("%d",&a);
//     for(int i=1;i<=10;i++){

//         printf("%d x %d = %d\n",a,i,i*a);
//     }
//     return 0;
// }

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        printf("%d x %d = %d",n,i,n*i);
        printf("\n");
    }
    return 0;
}