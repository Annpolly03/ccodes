#include <stdio.h>

int main()
{
  int yr;
 
  printf("\n Please Enter as you wish \n");
  scanf("%d", &yr);
 
  if ( yr%400 == 0)
     printf("\n%d is a Leap Year. \n", yr);
  else if ( yr%100 == 0)
     printf("\n%d is not. \n", yr);
  else if ( yr%4 == 0 )
     printf("\n%d is a Leap Year. \n", yr);
  else
     printf("\n%d is not. \n", yr);  
 
  return 0;
}
