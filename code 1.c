//Function to calculate the area of a circle. (TSRS)

#include<stdio.h>
#include<conio.h>

float area(int);

int main()
{
    int R;
    float A;
    printf("Enter the Radius of the Circle\n");
    scanf("%d",&R);
    A=area(R);
    printf("Area of the Circle having Radius %d is %.2f",R,A);
    getch();
}

float area(int radius)
{
    float a;
    a=3.14*radius*radius;
    return a;
}