
#include<stdio.h>
#include<string.h>
int main()
{
    char a[200], b;
    int i, j, c, d;
    gets(a);
    c=strlen(a);
    for(i=0; i<c; i++)
    {
        if(a[i]=='+')
        {
            for(j=i; j<c; j++)
            {
                a[j]=a[j+1];
            }
        }
    }
    d=strlen(a);
    for(i=0; i<d; i++)
    {
        for(j=i+1; j<d; j++)
        {
            if(a[i]>a[j])
            {
                b=a[i];
                a[i]=a[j];
                a[j]=b;
            }
        }
    }
    c=strlen(a);
   for(i=0; i<c; i++)
   {
       if(i<(c-1))
        printf("%c+",a[i]);
        else
            printf("%c",a[i]);
   }
}
