#include<stdio.h>
int main(){
    int n,count;
    scanf("%d",&n);
    int array_1[n];
    for(int i=0;i<n;i++){
        int x;
        scanf("%d",&x);
        array_1[i]=x;
    }
    for(int j=0;j<n;j++){
        if(array_1[j] not in array_1){
            for(int x;x<n;x++){
                if (array_1[j]==array_1[x]){
                    count+=1;
                }
            }
            printf("%d %d\n",array_1[j],count-1);
}
    }
return 0;
}