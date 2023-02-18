#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *si, *am;
    FILE *ra;
    char a[100], b;
    ra=fopen("D:/Codeforces/file.c", "r+");
    if(ra=='/0')
    {
       printf("can not open file");
       exit (0);
    }
    b=fgetc(ra);
    while(b!=EOF)
    {
        b=fgetc(ra);
        printf("%c", b);
    }
    fclose(ra);
    printf("Enter the name and directory of the file you want to copy: ");
    gets(a);
    si=fopen(a, "r");
    if(si=='\0')
    {
        printf("The file is not valid");
        exit (0);
    }
    printf("Enter the name and directory of the file you want to copy in: ");
    gets(a);
    am= fopen(a, "w+");
    if(am=='\0')
    {
        printf("can't open file..");
        exit (0);
    }
    b=fgetc(si);
    while(b!=EOF)
    {
        fputc(b, am);
        b=fgetc(si);
    }
    //fclose(ra);
    fclose(si);
    fclose(am);
    return 0;
}
