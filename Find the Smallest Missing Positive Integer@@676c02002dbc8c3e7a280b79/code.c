#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n],int updated_array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        updated_array[i]=0;
    }
    for(int j;j<n;j++){
        if(j>=0){
            updated_array[i]=arr[i];
        }
    }
    for(int x;x<n-1;x++){
        if((updated_array[x+1]!=updated_array[x]+1 )&& (updated_array[x-1]!=updated_array[x]-1)){
            if (arr[x + 1] > arr[x]) {
                printf("%d\n", arr[x] + 1);
            } else {
                printf("%d\n", arr[x] - 1);
            }
        }
    }
    return 0;
}