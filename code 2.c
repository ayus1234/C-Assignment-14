//Function to calculate simple interest. (TSRS)

#include<stdio.h>
#include<conio.h>

float simple_interest(int,int,int);

int main()
{
    int P,R,T;
    float SI;
    printf("Enter the Principal, Rate and Time\n");
    scanf("%d %d %d",&P,&R,&T);
    SI=simple_interest(P,R,T);
    printf("Simple Interest having Principal %d, Rate %d and Time %d is %.2f",P,R,T,SI);
    getch();
}

float simple_interest(int principal,int rate,int time)
{
    float si;
    si=principal*rate*time/100.0;
    return si;
}