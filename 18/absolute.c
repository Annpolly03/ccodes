#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num;
    printf("Enter Number to find the Absolute value= ");
    scanf("%d",&num);

    int abNum = abs(num);

    printf("\n Actual Number = %d",num);
    printf("\n Absolute Number = %d\n",abNum);
}