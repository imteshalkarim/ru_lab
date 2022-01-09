//WAP to store and 10 numbers in a 1-D array and display the odd numbers
#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],x;
    printf("Enter 10 numbers into the array\n");
    for(x=0;x<10;x++)
    {
        printf("Enter a number\n");
        scanf("%d",&a[x]);
    }
    for(x=0;x<10;x++)
    {
        if(a[x]%2!=0)
        {
            printf("%d \n",a[x]);
        }
    }
    getch();
}