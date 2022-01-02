//Write a Program to compute the factors of a given number.
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,f=1;
    printf("Enter a number\n");
    scanf("%d",&n);
    while(f<=n)
    {
        if(n%f==0)
        printf("%d \n",f);
        f++;
    }
    getch();
}