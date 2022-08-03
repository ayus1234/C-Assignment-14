//Function to calculate HCF of two numbers. (TSRS)

#include<stdio.h>
#include<conio.h>

int HCF(int,int);

int main()
{
    int N1,N2,H;
    printf("Enter two numbers\n");
    scanf("%d %d",&N1,&N2);
    H=HCF(N1,N2);
    printf("HCF of %d and %d is %d",N1,N2,H);
    getch();
}

int HCF(int num1,int num2)
{
    int i;
    for(i=num1<num2?num1:num2;i>=1;i--)
    {
        if(num1%i==0 && num2%i==0)
           break;
    }
    return i;
}