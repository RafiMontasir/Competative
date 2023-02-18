
#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000],b[1000],e[1000],d;
    int i, j, c, rc=0;
    gets(a);
    gets(b);
    c=strlen(a);
    for(i=0; i<c; i++)
    {
       e[i]=a[c-1-i];
    }
    for(i=0; i<c; i++)
    {
        if(e[i]==b[i])
            rc++;
    }
    if(rc==c)
    printf("YES");
    else
        printf("NO");
}
