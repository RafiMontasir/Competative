
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char a[150][3], b;
    int n, c=0, i;
    scanf("%d%c",&n,&b);
    for(i=0; i<n; i++)
    {
         gets(a[i]);
        if(a[i][0]=='X'&&a[i][1]=='+')
            c++;
        else if(a[i][0]=='+'&&a[i][1]=='+')
            c++;
        else if(a[i][0]=='X'&&a[i][1]=='-')
            c--;
        else if(a[i][0]=='-'&&a[i][1]=='-')
            c--;
    }
    printf("%d", c);
     return 0;
}
