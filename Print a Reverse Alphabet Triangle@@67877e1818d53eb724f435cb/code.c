#include <stdio.h>
int main() {
    int x;
    scanf("%d",&x);
    for(int i=x;i>0;i--){
        for(int j=1;j<=x;j++){
            printf("%C",64+j);
        }
    }
    return 0;
}