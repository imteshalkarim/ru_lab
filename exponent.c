//WAP to raise a number to a given power.
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,v,p=1;
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("Enter its exponent\n");
    scanf("%d",&v);
    for(int x=1;x<=v;x++)
    {
        p=p*n;
    }
    printf("Result = %d",p);
    getch();
}