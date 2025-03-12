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
    for(i=0;i<n-1;i++){
        if arr_1[i]>arr_1[i+1]{
            printf("Not Sorted");
            break;
        }
    printf("Sorted")
    }
}