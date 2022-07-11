#include<stdio.h>
int main() {
    int a,n,d,tn,i;
    int sum = 0;

    printf("Enter first number of an A.P series: ");
    scanf("%d",&a);
    printf("Enter the total nos in this A.P Series: ");
    scanf("%d",&n);
    printf("Enter the common difference: ");
    scanf("%d",&d);

    sum = (n*(2*a+(n-1)*d))/2;
    tn=a + (n-1)*d;
    printf("\n The Sum of Series A.P. : ");
    
    for(i = a; i <= tn; i = i + d)
    {
        if(i != tn)
            printf("%d + ", i);
        else
            printf("%d = %d", i, sum);
    }
    printf("\n");
    return 0;
}
