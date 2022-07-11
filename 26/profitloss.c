#include<stdio.h>
int main(){
    float P,S,Amount;

    printf("\n Enter the actual price of the product: ");
    scanf("%f",&P);
    printf("\n Enter the Selling Price) :  ");
  	scanf("%f", &S);

    if(S>P)
    {
        Amount= S-P;
        printf("\n Profit Amount= %.4f",Amount);

    }
    else if(P>S)
    {
        Amount=P-S;
        printf("\n Loss Amount = %.4f",Amount);
    }
    else 
    printf("\n No Profit No Loss!!");

    return 0;
}