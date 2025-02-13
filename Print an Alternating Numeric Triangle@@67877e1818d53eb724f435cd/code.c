#include <stdio.h>
int main() 
    int x,num=1;
    scanf("%d",&x);
    for(int i=0;i<x;i++){
        for(int j=0;j<i+1;j++){
            if(num%2!=0){
                num=1;
                printf("%d",num);
                num=0;
            }
            else{
                num=0;
                printf("%d",num);
            }
            }
    return 0;
}