#include<stdio.h>
#include<conio.h>
char s[100]; int c=0;
void main()
{
    printf("Enter a string \n");
    gets(s);
    for(int x=0;s[x]!=0;x++)
    {
        if(s[x]=='a'||s[x]=='A'||s[x]=='e'||s[x]=='E'||s[x]=='o'||s[x]=='O'||s[x]=='i'||s[x]=='I'||s[x]=='u'||s[x]=='U')
        c++;
    }
    printf("Number of vowels = %d\t",c);
    getch();
}