//Write a Program to reverse a number
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,r=0;
    printf("Enter a number\n");
    scanf("%d",&n);
    while(n>0)
    {
        int d=n%10;
        r=r*10+d;
        n=n/10;
    }
    printf("Reversed Number = %d", r);
    getch();
}