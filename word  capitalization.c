
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char a[1000];
    gets(a);
    if(a[0]>='a'&&a[0]<='z')
    {
        a[0]=a[0]-32;
    }
    puts(a);
}
