
#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int c, co=0, i, j;
    gets(a);
    c=strlen(a);
    for(i=0; i<c; i++)
    {
        if(a[i]!='1')
        {
             for(j=i+1; j<c; j++)
             {
                 if(a[i]==a[j])
                    a[j]='1';
             }
        }
    }
    puts(a);
    for(i=0; i<c; i++)
    {
        if(a[i]!='1')
        {
           co++;
        }
    }
    if(co%2==0)
        printf("CHAT WITH HER!");
    else
        printf("IGNORE HIM!");
}
