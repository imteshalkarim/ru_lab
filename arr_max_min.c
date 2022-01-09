//WAP to accept 10 elements into an array and display the maximum and minimum value.
#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],max=0,min=0;
    printf("Enter 10 elements into the array \n");
    for(int x=0;x<10;x++)
    {
        printf("Enter a number\n");
        scanf("%d",&a[x]);
    }
    max=a[0];min=a[0];
    for(int x=0;x<10;x++)
    {
        if(a[x]>max)
        max=a[x];
        if(a[x]<min)
        min=a[x];
    }
    printf("Maximum = %d\n",max);
    printf("Minimum = %d\n",min);
    getch();
}