#include<stdio.h>
int main(){
    int n,temp;
    scanf("%d",&n);
    int arr [n];
    for(int =0;i<n;i++){
        int x;
        scanf("%d",&x);
        arr[i]=x;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[i]>arr[i+1]){
                temp=arr[i];
                arr[j]=arr[j+1];
                arr[j+1]=arr[j];
            }
        }
    }
    printf("%d",arr[n-1]);
    return 0;
}