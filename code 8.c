//Function to calculate the number of arrangements one can make from n items and r selected at a time. (TSRS)

#include<stdio.h>
#include<conio.h>

int factorial(int);
int permutation(int,int);

int main()
{
    int N,R,P;
    printf("Enter the value of n and r\n");
    scanf("%d %d",&N,&R);
    P=permutation(N,R);
    printf("Number of Arrangements is %d",P);
    getch();
}

int factorial(int num)
{
    int i,fact=1;
    for(i=num;i>=1;i--)
        fact=fact*i;
    return fact;
}

int permutation(int n,int r)
{
    int p;
    p=(factorial(n)/factorial(n-r));
    return p;
}