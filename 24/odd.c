#include<stdio.h>
int main()
{
    int i,num;

    printf("\n Enter the maximum limit value: ");
    scanf("%d",&num);

    printf("\n Odd numbers between 1 and %d are : \n",num);
    for(i=1; i <= num;i++)
    {
    if (i % 2 !=0 )
    {
        printf("\n %d\t",i);
    }
}
return 0;
}