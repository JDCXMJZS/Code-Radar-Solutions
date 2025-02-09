#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for(int x=1;x<=2;x++){
        for(char v='A';v<=x;v++){
            printf("%c",v);
        }
        printf("\n");
    }
    return 0;
}