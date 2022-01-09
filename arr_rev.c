//WAP to enter an array and reverse it.
#include<stdio.h>
#include<conio.h>
void main()
{
    int a[5],b[5],y=4;
    printf("Enter 5 values into the array\n");
    for(int x=0;x<5;x++)
    {
        printf("Enter a number\n");
        scanf("%d",&a[x]);
    }
    printf("Printing Reverse \n");
    for(int x=0;x<5;x++)
    {
        b[x]=a[y];
        y--;
    }
    for(int x=0;x<5;x++)
    {
        printf("%d\n",b[x]);
    }
    getch();
}