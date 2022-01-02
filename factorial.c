//Factorial of a number
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,f=1;
    printf("Enter a number to calculate its factorial \n");
    scanf("%d",&n);
    while(n>=1)
    {
        f=f*n;
        n--;
    }
    printf("Factorial = %d",f);
    getch();
}