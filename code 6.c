//Function to calculate the factorial of a number.(TSRS)

#include<stdio.h>
#include<conio.h>

int factorial(int);

int main()
{
    int N,F;
    printf("Enter the number\n");
    scanf("%d",&N);
    F=factorial(N);
    printf("Factorial of %d is %d",N,F);
    getch();
}

int factorial(int num)
{
    int i,fact=1;
    for(i=num;i>=1;i--)
        fact=fact*i;
    return fact;
}