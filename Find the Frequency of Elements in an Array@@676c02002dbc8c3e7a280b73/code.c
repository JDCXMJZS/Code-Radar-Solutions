#include<stdio.h>
int main(){
    int n,count;
    scanf("%d",&n);
    int array_1[n],updated_array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array_1[i]);
    }
    for(int j=0;j<n;j++){
        count=0;
        for(int k=0;k<n;k++){
            if(array_1[j]==array_1[k]){
                count+=1;
            }
        }
        for(int z=0;z<n;z++){
            if(count>1){
            updated_array[z]=j;
        }
        else{
            updated_array[z]=j;
        }}
        }
    return 0;
}