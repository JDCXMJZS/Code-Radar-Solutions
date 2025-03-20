#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int x;x<n-1;x++){
        if((arr[x+1]!=arr[x]+1 )&& (arr[x-1]!=arr[x]-1)){
            if (arr[x + 1] > arr[x]) {
                printf("%d\n", arr[x] + 1);
            } else {
                printf("%d\n", arr[x] - 1);
            }
        }
    }
    return 0;
}