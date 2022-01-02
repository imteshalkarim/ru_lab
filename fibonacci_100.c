//Fibonacci Series less than 100
#include<stdio.h>
#include<conio.h>
void main()
{
    int a=0,b=1,c;
    printf("%d \n",a);
    printf("%d \n",b);
    while(c<=100)
    {
        c=a+b;
        if(c<=100)
        printf("%d \n",c);
        a=b,
        b=c;
    }
    getch();
}