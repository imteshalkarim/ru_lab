//The sum of first 10  natural numbers
#include<stdio.h>
#include<conio.h>
void main()
{
    int x=1,s=0;
    while(x<=10)
    {
        s=s+x;
        x++;
    }
    printf("The sum is = %d",s);
    getch();
}