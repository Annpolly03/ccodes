#include<stdio.h>
int main()
{
    int i = 1,n,exp;
    long p= 1;

    printf("\n ENTER ANY NUMBER: ");
    scanf("%d",&n);

    printf("ENTER THE EXPONENT VALUE: ");
    scanf("%d",&exp);
    
    while(i <= exp)
    {
        p=p*n;
        i++;

    }

    printf("\n The Power of %d rase to %d is %d",n,exp,p);

    return 0;
}