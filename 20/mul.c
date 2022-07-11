#include<stdio.h>
int main()
{
    int num, i=1;
    printf("Enter any number: ");
    scanf("%d", &num);
    printf("\n Multipilcation table of %d : ",num);

    while(i <= 10) {
        printf("\n %d x %d = %d",num,i,num*i);
        i++;
    }
return 0;

}