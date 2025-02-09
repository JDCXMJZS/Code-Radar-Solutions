#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=n;j>i;j--){
            printf(" ");
        }
        for(int k=0;k<(i*2-1);k++){
            printf("*");
        }
        printf("\n");
    for(int l=1;i<n;l++){
        for(int f=0;f<l;f++){
            printf("-");
        }
    }
    }
    return 0;
}