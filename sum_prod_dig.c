// Write a Program to print the sum and product of digits of an integer.
#include<stdio.h>
#include<conio.h>
void main()
{
    int x,s=0,p=1;
    printf("Enter a number \n");
    scanf("%d",&x);
    while(x>0)
    {
        int d=x%10;
        s=s+d;
        p=p*d;
        x=x/10;
    }
    printf("Sum = %d \n",s);
    printf("Product = %d \n",p);
    getch();
}