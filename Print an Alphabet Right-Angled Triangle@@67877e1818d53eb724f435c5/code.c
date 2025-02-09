#include <stdio.h>
int main() {
    int n;
    int v;
    scanf("%d",&n);
    for(int x=1;x<=n;x++){
        v=65;
        for(int j=1;j<=x;j++){
            printf("%c",v);
            v+=1;
        }
        printf("\n");
    }
    return 0;
}