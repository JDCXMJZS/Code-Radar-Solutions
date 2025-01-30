// #include <stdio.h>
// int main() {
//     int a,b;
//     scanf("%d %d",&a,&b);
//     printf("%s",(a>b)?"True":"False");
//     return 0;
// }
#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>b){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}