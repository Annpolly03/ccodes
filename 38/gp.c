#include <stdio.h>
#include<math.h>
int main()
{
    int a, n,r;
    float tn,sum=0;

    printf("Please Enter first number of a G.P. series: ");
    scanf("%d",&a);
    printf("Please Enter the total numbers in G.P. series: ");
    scanf("%d",&n);
    printf("Please Enter the common Ratio: ");
    scanf("%d",&r);

    sum =(a*(1-pow(r,n)))/(1-r);
    tn=a*(pow(r,n-1));

    printf("\n the sum of geometric progression series = %.2f",sum);
    printf("\n The tn Term of Geometric Progresion series= %.2f\n",tn);

    return 0;





}