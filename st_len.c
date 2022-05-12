/*Program to find the length of a string.*/
#include<stdio.h>
#include<conio.h>
char s[100];
int l=0;
void main()
{
    printf("Enter a string\n");
    gets(s);
    for(int x=0;s[x]!='\0';x++)
    {
        l++;
    }
    printf("The length of the string is = %d",l);
    getch();
}