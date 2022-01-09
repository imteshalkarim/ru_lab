//WAP to enter an array and check whether a number is present or not.
#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],n;
    printf("Enter 10 numbers into the array \n");
    for(int x=0;x<10;x++)
    {
        printf("Enter a number \n");
        scanf("%d",&a[x]);
    }
    printf("Enter a number to check for its presence \n");
    scanf("%d",&n);
    for(int x=0;x<10;x++)
    {
        if(a[x]==n)
        printf("Element found at index number = %d",x);
        break;
    }
    getch();
}