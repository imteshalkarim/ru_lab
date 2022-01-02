//Write a Program to find greatest among three numbers.
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,g;
    printf("Enter three numbers \n");
    scanf("%d %d %d", &a,&b,&c);
    if(a>b&&a>c)
    printf("Greatest = %d",a);
    else if(b>a&&b>c)
    printf("Greatest = %d",b);
    else
    printf("Greatest = %d",c);
    getch();
}