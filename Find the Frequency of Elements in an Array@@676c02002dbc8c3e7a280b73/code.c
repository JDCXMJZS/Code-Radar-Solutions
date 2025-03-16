#include<stdio.h>
int main(){
    int n,count;
    scanf("%d",&n);
    int array_1[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array_1[i]);
    }
    for(int j=0;j<n;j++){
        count=0;
        for(int k=0;k<n &&k!=;k++){
            if(array_1[j]==array_1[k]){
                count+=1;
            }
            else{
                break;
            }
        }
        printf("%d %d\n",array_1[j],count+1);
        }
    return 0;
}