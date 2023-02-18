
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char a[100];
    int u=0, l=0, i, c;
    gets(a);
    c=strlen(a);
    for(i=0; i<c; i++)
    {
        if(a[i]>='a'&&a[i]<='z')
           l++;
           else
            u++;
    }
    for(i=0; i<c; i++)
    {
        if(l>c/2)
        {
            if(a[i]>='A'&&a[i]<='Z')
                a[i]=a[i]+32;
        }
        else if(u>c/2)
        {
            if(a[i]>='a'&&a[i]<='z')
                a[i]=a[i]-32;
        }
        else if(l==c/2)
            {
            if(a[i]>='A'&&a[i]<='Z')
                a[i]=a[i]+32;
        }
    }
    puts(a);
}
