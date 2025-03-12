#include<stdio.h>
int main(){
    int n,index,sum,target;
    scanf("%d",&target);
    scanf("%d",&n);
    int array_1[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array_1[i]);
    }
    for(int j=0;j<n;j++){
        sum+=1;
        if (array_1[j]==target){
            printf("%d",sum-1);
            return 0;
        }
        else{
            continue;
        }
        

    }
    printf("%d",-1);
}