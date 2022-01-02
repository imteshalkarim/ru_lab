//The product of first 10  natural numbers
#include<stdio.h>
#include<conio.h>
void main()
{
    int x=1,p=1;
    while(x<=10)
    {
        p=p*x;
        x++;
    }
    printf("The product is = %d",p);
    getch();
}