// #include<stdio.h>
// int main(){
//     int n,count,order;
//     scanf("%d",&n);
//     int array_1[n],updated_array[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&array_1[i]);
//     }
//     for(int j=0;j<n;j++){
//         count=0,order=0;
//         for(int k=0;k<n;k++){
//             order+=1;
//             if(array_1[j]==array_1[k]){
//                 count+=1;
//                 updated_array[order-1]=updated_array[j];
//             }
//             else{
//                 updated_array[order-1]=updated_array[j];
//             }
//             printf("%d %d\n",updated_array[j],count);
//             }
//         }
//     return 0;
// }

#include<stdio.h>
int main(){
    int n,temp,frequency=1;
    scanf("%d",&n);
    int array_1[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array_1[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(array_1[j]>array_1[j+1]){
                temp=array_1[j];
                array_1[j]=array_1[j+1];
                array_1[j+1]=temp;
            }
        }
    }
    for(int x=0;x<n;x++){
        frequency=1;
        if(array_1[x+1]==array_1[x]){
            continue;
        }
        else{
            for(int z=x;z<n;z++){
                if(array_1[z]==array_1[z+1]){
                    frequency+=1;
                }   
            }
            printf("%d %d\n",array_1[x],frequency);
        }
    }
    return 0;
}