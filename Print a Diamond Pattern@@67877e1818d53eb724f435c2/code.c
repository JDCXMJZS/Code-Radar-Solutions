#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=n;j>i;j--){
            printf(" ");
        }
        for(int k=0;k<(2*i-1);k++){
            printf("*");
        }
        printf("\n");
    
    }
    for(int x=1;x<n;x++){
        for(int b=1;b<=x;b++){
            printf(" ");
        }
        for(int z=2*b-1;z>0;z++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}