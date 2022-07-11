#include <stdio.h>
 
int main()
{
	char Operator;
	float n1, n2, result = 0;
	
	printf("\n Please Enter an Operator (+, -, *, /)  :  ");
  	scanf("%c", &Operator);
  	
	printf("\n Please Enter the Values for two Operands: num1 and num2  :  ");
  	scanf("%f%f", &n1, &n2);
  	
  	switch(Operator)
  	{
  		case '+':
  			result = n1 + n2;
  			break;
  		case '-':
  			result = n1 - n2;
  			break;  			
  		case '*':
  			result = n1 * n2;
  			break;
  		case '/':
  			result = n1 / n2;
  			break;
		default:
			printf("\n You have enetered an Invalid Operator ");				    			
	}
  
	printf("\n The result of %.2f %c %.2f  = %.2f", n1, Operator, n2, result);
	
  	return 0;
}