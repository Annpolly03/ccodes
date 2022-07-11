#include <stdio.h>

int numFact(int Num)
{ 
  if (Num == 0 || Num == 1)  
    return 1;
  else
    return Num * numFact (Num -1);
}

int main()
{
    int n, r, Result;
    
    printf("Enter the Number to calculate  = ");
    scanf("%d",&n);

    printf("Enter the r value to calculate = ");
    scanf("%d",&r);

    Result = numFact(n)/ numFact(n - r);

    printf("The Final Result = %d\n", Result);
    
    return 0;
}