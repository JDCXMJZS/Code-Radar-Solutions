#include<stdio.h>
int main(){
    int n,sum,digit;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        sum=0;
        while(arr[i]!=0){
        digit=arr[i]%10;
        sum+=digit;
        arr[i]=arr[i]/10;}
        if(sum<0){
            printf("%d",-sum);
        }
        else{
            printf("%d",sum);
        }
    }
    return 0;
}