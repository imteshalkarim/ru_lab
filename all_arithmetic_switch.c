//Write a Program to use all arithmetic operation using switch case
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,r;
    char ch;
    printf("Here are the options");
    printf("+ - Addition \n - - Subtraction \n * - Multiplication \n / - Division \n % - Modulus\n");
    printf("Enter two numbers\n");
    scanf("%d %d", &a, &b);
    fflush(stdin);
    printf("Enter a choice\n");
    scanf("%c",&ch);
    switch(ch)
    {
        case '+':
             r=a+b;
            printf("%d\n",r);
            break;
        case '-':
            r=a-b;
            printf("%d\n", r);
            break;
         case '*':
             r=a*b;
            printf("%d\n",r);
            break;
        case '/':
             r=a/b;
            printf("%d\n",r);
            break;
        case '%':
             r=a%b;
            printf("%d\n",r);
            break;
        default:
            printf("Try another operator");
    }
    getch();
}