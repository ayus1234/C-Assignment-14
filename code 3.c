/*Function to check whether a given number is even or odd. Return 1 if the number is even, otherwise return 0. 
  (TSRS)*/

#include<stdio.h>
#include<conio.h>

int checkEvenOdd(int);

int main()
{
    int N,result;
    printf("Enter the number\n");
    scanf("%d",&N);
    result=checkEvenOdd(N);
    printf("%d",result);
    getch();
}

int checkEvenOdd(int num)
{
    if(num%2)
       return 0;
    else
       return 1;
}