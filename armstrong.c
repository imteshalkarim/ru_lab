//WAP to check if a number is armstrong or number.
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,s=0;
    printf("Enter a number\n");
    scanf("%d",&n);
    int a=n;
    while(a>0)
    {
        int d=a%10;
        s=s+d*d*d;
        a=a/10;
    }
    if(s==n)
    printf("Armstrong Number");
    else
    printf("Not an armstrong number");
    getch();
}