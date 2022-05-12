#include<stdio.h>
#include<conio.h>
char str[100],rev[100];
int l=0,e=0,x=0;
void main()
{
    printf("Enter a string \n");
    gets(str);
    for(x=0;str[x]!=0;x++)
        l++;
    e=l-1;
    for(x=0;x<l;x++,e--)
        rev[x]=str[e];
    rev[x]='\0';
    printf("The new string is \n");
    puts(rev);
    if(str==rev)
    printf("It is a palindrome\n");
    else
    printf("It is not a palindrome\n");
}