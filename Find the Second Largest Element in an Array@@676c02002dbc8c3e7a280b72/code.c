#include<stdio.h>
int main(){
    int n,temp;
    scanf("%d",&n);
    if(n==1){
        printf("%d",-1);
        return 0;
    }
    int arr[n];
    for(int i=0;i<n;i++){
        int x;
        scanf("%d",&x);
        arr[i]=x;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=arr[j];
            }
        }
    }
     printf("%d",arr[n-2]);
    return 0;
}