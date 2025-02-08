#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for(int i=n;i>0;i--){
        for(int j=0;j<i+1;j++){
            printf(" ");
        }
        for(int k=1;k<n+1;i+=2){
            printf("*");
        }
        printf("\n");
         

    }
    return 0;
}