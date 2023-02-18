
#include<stdio.h>
int main()
{
    int n,X=0;
    char s[10];

    scanf("%d",&n);

    while(n){
        scanf("%s",s);

        if((s[0]=='X' && s[1]=='+') || (s[0]=='+' && s[1]=='+')){
            X++;
        }
        else{
            X--;
        }
        n--;
    }

    printf("%d",X);

    return 0;
}
