#include<stdio.h>
int isPrime(int n){
    if(n<=1){
        printf("%d",0);
    }
    else{
        for(int i=2;i<n;i++){
            if(n%i==0){
                printf("%d",0);
                break;
            }
        }
        printf("%d",1);
    }
    return 0;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int num;
        scanf("%d",&num);
        printf("%d\n",isPrime(num));
    }
    return 0;
}