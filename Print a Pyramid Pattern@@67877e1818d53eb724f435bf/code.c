#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for(int i=n;i>0;i--){
        for(int j=0;j<i+1;j++){
            printf(" ");
        }
        for(int k=1;k<2i+1;i+=2){
            printf("*\n");
        }
        printf("\n");
         

    }
    return 0;
}