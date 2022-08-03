//Function to print first N odd natural numbers. (TSRN)

#include<stdio.h>
#include<conio.h>

void printOddN(int);

int main()
{
    int N;
    printf("Enter the number\n");
    scanf("%d",&N);
    printOddN(N);
    getch();
}

void printOddN(int num)
{
    int i;
    for(i=1;i<=num;i++)
        printf("%d ",2*i-1);
}