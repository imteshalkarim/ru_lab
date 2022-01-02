//Multiplication table
#include<stdio.h>
#include<conio.h>
void main()
{
    int x,n=1,p=1;
    printf("Enter a number to print its multipilication table\n");
    scanf("%d",&x);
    while(n<=10)
    {
        p=x*n;
        printf("%d  x  %d  =  %d \n",x,n,p);
        n++;
    }
    getch();
}