#include<stdio.h>
int main()
{
    int n1,n2;
    float res;
    printf("Enter the first number = ");
    scanf("%d",&n1);

    printf("Enter the second number = ");
    scanf("%d",&n2);

    int sum= n1+n2;
    res = sum/2;

    printf("Sum = %d\n",sum);
    printf("Average= %.2f\n",res);

    return 0;
}