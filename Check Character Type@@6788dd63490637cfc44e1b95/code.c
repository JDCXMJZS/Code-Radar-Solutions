#include <stdio.h>
int main() {
    char a;
    scanf("%c",&a);
    if((a>='a' && a<='z')||( a>='A' && a<='Z')){
        if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U'){
            printf("Vowel");
        }
        else{
            printf("Consonant");
        }
    } 
    else if (a=='@'){
        printf("Special Character");
    }
    else if(a>=1){
        printf("Digit");
    }
    return 0;
}