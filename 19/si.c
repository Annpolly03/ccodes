#include<stdio.h>
int main() {
float P,R,T,SI;

printf("\n Enter Principal Amount: \n");
scanf("%f",&P);

printf("\n Enter Rate of Interest: \n");
scanf("%f",&R);
printf("\n Enter time period in years: \n");
scanf("%f",&T);

SI=(P*R*T)/100;
printf("\n The Simple Interest is: %.2f",SI);

return 0;

}