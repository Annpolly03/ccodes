#include<stdio.h>
int main() {
    int num;

    printf("\n Enter any value: ");
    scanf("%d",&num);

if ((num %5 == 0) && (num %11 == 0))

    printf("\n %d is Divisible by 5 and 11", num);
else
	printf("\n %d is Not Divisible by 5 and 11", num);
 
return 0;
 }
