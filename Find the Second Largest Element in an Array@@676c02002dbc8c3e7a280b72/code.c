#include<stdio.h>
int main(){
    int n,temp;
    scanf("%d",&n);
    int arr [n];
    for(int i=0;i<n;i++){
        int x;
        scanf("%d",&x);
        arr[i]=x;
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("%d",arr[n-2]);
    return 0;
}