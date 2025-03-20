#include<stdio.h>
int CheckPrime(int n){
    if(n==1){
        return 0;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int x,result;
    scanf("%d",&x);
    for(int j=0;j<x;j++){
        int z;
        scanf("%d",&z);
        result=CheckPrime(z);
        if(result==1){
            printf("%d",1);
        }
        else{
            printf("%d",0);
        }
        printf("\n");
    }
}