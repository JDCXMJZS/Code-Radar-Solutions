#include<stdio.h>
int main(){
    int n,count;
    scanf("%d",&n);
    int array_1[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array_1[i]);
    }
    for(int j=0;j<n;j++){
        if(array_1[j] in array_1){
            count+=1;
        }
        printf("%d %d",j,count);
    }
    return 0;
}