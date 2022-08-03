//Function to print first N prime numbers (TSRN)

#include<stdio.h>
#include<conio.h>

void printNPrime(int);

int main()
{
    int N;
    printf("Enter the number\n");
    scanf("%d",&N);
    printNPrime(N);
    getch();
}

void printNPrime(int num)
{
    int i,j;
    for(i=2;i<=num;i++)
    {
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
               break;
        }
        if(i==j)
           printf("%d ",i);
    }
}