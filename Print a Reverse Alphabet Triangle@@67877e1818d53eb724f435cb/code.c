#include <stdio.h>
int main() {
    int x;
    scanf("%d",&x);
    for(i=x;i>0;i--){
        for(j=1;j<=x;j++){
            printf("%C",65+j);
        }
    }
    return 0;
}