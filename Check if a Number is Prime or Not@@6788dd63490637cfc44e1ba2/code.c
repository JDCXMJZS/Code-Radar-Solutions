#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if(a>1){
        for(int i=2;i<a;i+=1){
            if (a%i==0){
                printf("Not Prime");
                break;}
        }
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}