#include<stdio.h>
#include<conio.h>
void main()
{
    char s1[100],s2[100],s3[100];
    int x=0,y=0;
    printf("Enter string 1\n");
    gets(s1);
    printf("Enter string 2\n");
    gets(s2);
    for(x=0;s1[x]!='\0';x++)
    {
        s3[x]=s1[x];
    }
    for(y=0;s2[y]!='\0';y++)
    {
        s3[x]=s2[y];
        x++;
    }
    s3[x]='\0';
    printf("The concatenated string is: \n");
    puts(s3);
    getch();
}