/*Write a Program to perform following actions on an array entered by the user:
a) Print the even-valued elements
b) Print the odd-valued elements
c) Calculate and print the sum and average of the elements of array
d) Print the maximum and minimum element of array
e) Remove the duplicates from the array
f) Print the array in reverse order
The program should present a menu to the user and ask for one of the options. The
menu should also include options to re-enter array and to quit the program.*/

//Under progress
#include<stdio.h>
#include<conio.h>
void even(int arr[10]);
void odd (int arr[10]);
void avg (int arr[10]);
void main()
{
    int a[10],s=10;
    printf("Enter array elements \n");
    for(int x=0;x<10;x++)
    {
        printf("Enter a number\n");
        scanf("%d",&a[x]);
    }
    printf("Current array is as follows: \n");
    for(int x=0;x<s;x++)
    {
    printf("%d \t",a[x]);
    }
    even(a);
    odd(a);
    avg(a);
    min_max(a);
    getch();
}
void even(int arr[10])
{
    for(int x=0;x<10;x++)
    {
        if(arr[x]%2==0)
        printf("%d\n",arr[x]);
    }
}
void odd(int arr[10])
{
    for(int x=0;x<10;x++)
    {
        if(arr[x]%2!=0)
        printf("%d\n",arr[x]);
    }
}
void avg(int arr[10])
{
    float avg=0.0;
    int s=0;
    for(int x=0;x<10;x++)
    {
        s=s+arr[x];
    }
    avg=s/10.0;
    printf("Sum = %d\n",s);
    printf("Average = %f\n",avg);
}
void min_max(int arr[10])
{
    int min=arr[0],max=arr[0];
    for(int x=0;x<10;x++)
    {
        if(arr[x]>max)
        max=arr[x];
        if(arr[x]<min)
        min=arr[x];
    }
    printf("Maximum element = %d",max);
    printf("Minimum element = %d",min);
}