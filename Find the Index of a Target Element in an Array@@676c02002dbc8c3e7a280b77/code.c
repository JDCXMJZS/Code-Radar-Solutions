#include<stdio.h>
int main(){
    int n,index;
    scanf("%d",&n);
    int array_1[n];
    for(int i=0;i<n;i++){
        scanf("%d",array_1[i]);
    }
    for(int j=0;j<n;j++){
        sum+=1;
        if (array_1[j]==target){
            printf("%d",sum);
            return 0;
            sum+=1;
        }
        else{
            continue;
            sum+=1;
        }

    }
}