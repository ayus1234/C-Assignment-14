//Function to print first N natural numbers (TSRN)

#include<stdio.h>
#include<conio.h>

void printN(int);

int main()
{
    int N;
    printf("Enter the number\n");
    scanf("%d",&N);
    printN(N);
    getch();
}

void printN(int num)
{
    int i;
    for(i=1;i<=num;i++)
        printf("%d ",i);
}