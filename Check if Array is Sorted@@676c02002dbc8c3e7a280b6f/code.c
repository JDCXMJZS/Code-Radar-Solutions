#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr_1[n];
    for(int i=0;i<n;i++){
        int x;
        scanf("%d",&x);
        arr_1[i]=x;
    }
    for(int j=0;j<n-1;j++){
        if (arr_1[j]>arr_1[j+1]){
            printf("Not Sorted");
            break;
        }
    printf("Sorted")
    }
}