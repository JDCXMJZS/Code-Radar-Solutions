#include<stdio.h>
int CheckPrime(int n){
    if(n==1){
        return 0;
    }
    for(int i=1;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int x,result;
    scanf("%d",&x);
    for(int j=0;j<n;j++){
        int z;
        scanf("%d\n",&z);
        result=CheckPrime(z);
    }
}