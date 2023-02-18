#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int n, t, i, c, j, e;
    char *s1, b, d;
     scanf("%d%d%c",&n,&t,&d);
    s1=(char*)malloc(n*sizeof(char));
    gets(s1);
    c=strlen(s1);
    if(n==1)
    {
        printf("%s",s1);
        exit(0);
    }
    for(i=0; i<t; i++)
    {
        for(j=0; j<c; j++)
        {
             if(s1[j]=='B' && j!=c-1)
             {
                 e=j;
                 if(s1[j+1]=='G')
                 j++;
                 b=s1[e];
                 s1[e]=s1[e+1];
                 s1[e+1]=b;
             }
        }
    }
    if(s1[c-1]!='B')
    {
        b=s1[c-2];
        s1[c-2]=s1[c-1];
        s1[c-1]=b;
    }
    puts(s1);
}

