#include <stdio.h>
int main() {
    int x;
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        for(int j=x;j>=i;j--){
            printf("-");
        }
        for(int z=1;z<=i;z++){
            printf("%d",z);
        }
        for(int w=i-1;w>0;w--){
            printf("%d",w);
        }
    }
    return 0;
}