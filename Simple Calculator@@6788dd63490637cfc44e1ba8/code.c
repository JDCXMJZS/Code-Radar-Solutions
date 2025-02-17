#include<stdio.h>
int main(){
    int x,y,result;
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
            result=x/y;
            printf("%d",result);
            break;
        default:
            printf("Enter a valid number");
    }
    return 0;
}