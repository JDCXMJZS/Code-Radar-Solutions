#include <stdio.h>
int main() {
    int x;
    scanf("%d",&x);
    for(int i=x;i>0;i--){
        for(int j=1;j<=i;j++){
            printf("%C ",64+j);
        }
        printf("\n");
    }
    return 0;
}