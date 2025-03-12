#include<stdio.h>
int main(){
    int n,incr,decrease,l,m;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        int x;
        scanf("%d",&x);
        arr[i]=x;
    }
    for(int j=0;j<n;j++){
        for(int b=0;b<n;b++){
            if (arr[j]>arr[b]){
                incr+=1;
            }
            else{
                decrease+=1;
            }
            if (incr==n-1){
                m=arr[j];
            }
            else if (decrease==n-1){
                l=arr[j];
            }
            printf("%d %d",m,l);
            return 0;
        }
        
    }
}