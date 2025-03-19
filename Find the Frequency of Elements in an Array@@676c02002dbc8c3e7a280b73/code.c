#include<stdio.h>
int main(){
    int n,count,order;
    scanf("%d",&n);
    int array_1[n],updated_array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array_1[i]);
    }
    for(int j=0;j<n;j++){
        count=0,order=0;
        for(int k=0;k<n;k++){
            order+=1;
            if(array_1[j]==array_1[k]){
                count+=1;
                updated_array[order-1]=updated_array[j];
            }
            else{
                updated_array[order-1]=updated_array[j];
            }
            printf("%d %d",updated_array[j],count);
            }
        }
    return 0;
}