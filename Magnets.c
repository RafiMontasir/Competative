
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int n, i, c=0, j;
    char **a,b;
    scanf("%d%c",&n, &b);
    a=(char**)malloc(n*sizeof(char*));
    for(i=0; i<n; i++)
    {
        a[i]=(char*)malloc(2*sizeof(char));
    }
    for(i=0; i<n; i++)
    {
        gets(a[i]);
    }
    for(i=1; i<n; i++)
    {
        if(a[i-1][1]!=a[i][1])
            c++;
    }
    printf("%d", c+1);
}
