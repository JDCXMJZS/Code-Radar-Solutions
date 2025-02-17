#include<stdio.h>
int main(){
    int x,y,result;
    float z;
    char operators;
    scanf("%d %d %c",&x,&y,&operators);
    switch(operators){
        case '+':
            result=x+y;
            printf("%d",result);
            break;
        case '-':
            result=x-y;
            printf("%d",result);
            break;
        case '*':
            result=x*y;
            printf("%d",result);
            break;
        case '/':
            z=x/y;
            printf("%d",z);
            break;
        default:
            printf("Enter a valid operator");
    }
    return 0;
}