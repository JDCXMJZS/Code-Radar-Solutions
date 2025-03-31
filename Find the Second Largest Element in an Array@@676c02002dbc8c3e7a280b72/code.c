// #include<stdio.h>

// int main() {
//     int n, temp;
    
//     // Input size of the array
//     scanf("%d", &n);

//     // Handle edge case where size is less than 2
//     if (n <= 1) {
//         printf("%d", -1);
//         return 0;
//     }

//     // Declare array
//     int arr[n];

//     // Input array elements
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     // Bubble sort algorithm
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = 0; j < n - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 // Swap elements
//                 temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }

//     // Print the second-largest element
//     printf("%d", arr[n - 2]);

//     return 0;
// }
#include<stdio.h>
int main(){
    int n,temp;
    scanf("%d",&n);
    if(n==1){
        printf("%d",-1);
        return 0;
    }
    int arr[n];
    for(int i=0;i<n;i++){
        int x;
        scanf("%d",&x);
        arr[i]=x;
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
     printf("%d",arr[n-2]);
    return 0;
}