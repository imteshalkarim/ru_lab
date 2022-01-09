//WAP to enter 10 numbers into an array and find the sum and average of the array.
#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],s=0;
    float avg=0.0;
    printf("Enter 10 numbers into the array \n");
    for(int x=0;x<10;x++)
    {
        printf("Enter a number \n");
        scanf("%d",&a[x]);
    }
    for(int x=0;x<10;x++)
    {
        s=s+a[x];
    }
    avg=s/10.0;
    printf("Sum = %d \n",s);
    printf("Average = %f",avg);
    getch();
}
