//Function to check whether a given number is Prime or not. (TSRS)

#include<stdio.h>
#include<conio.h>

int checkPrime(int);

int main()
{
    int N,result;
    printf("Enter the number\n");
    scanf("%d",&N);
    result=checkPrime(N);
    printf("%d",result);
    getch();
}

int checkPrime(int num)
{
    int i;
    for(i=2;i<=num-1;i++)
    {
        if(num%i==0)
           break;
    }
    if(num==i)
       return 1;
    else
       return 0;
}