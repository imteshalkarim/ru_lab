#include<stdio.h>
#include<conio.h>
char s[100];
void main()
{
    printf("Enter a string \n");
    gets(s);
    for(int x=0;s[x]!=0;x++)
    {
        if(s[x]>='A'&&s[x]<='Z')
        s[x]=s[x]+32;
        else if(s[x]>='a'&&s[x]<='z')
        s[x]=s[x]-32;
    }
    printf("Modified string = \n");
    puts(s);
    getch();
}