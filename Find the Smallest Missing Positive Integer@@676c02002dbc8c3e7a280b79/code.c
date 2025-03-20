#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<n;j++){
        if(((arr[j]-arr[j+1]!=1)&&(arr[j]>=0 && arr[j+1]>=0)) ||((arr[j]-arr[j+1]!=-1)&&(arr[j]>=0 && arr[j+1]>=0))){
            printf("%d",arr[j]+1);
            break;
        }
    }
    return 0;
}