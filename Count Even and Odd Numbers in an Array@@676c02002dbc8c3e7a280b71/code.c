#include<stdio.h>
int main(){
    int a,even=0,odd=0;
    scanf("%d",&a);
    int array_1[a];
    for(int i=0;i<a;i++){
        int x;
        scanf("%d",&x);
        array_1[i]=x;
    }
    for(int j=0;j<a;j++){
        if( array_1[j]%2==0){
            even+=1;
        }
        else{
            odd+=1;
        }
    }
    printf("%d %d",even,odd);
    return 0;
}