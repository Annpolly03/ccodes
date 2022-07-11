#include<stdio.h>
#include<math.h>

void main()
{
    float Price[50];
    int i,num;
    float Mean,Variance,SD,Sum=0,Differ,Varsum=0;

    printf("\n Enter the N value \n");
    scanf("%d",&num);

    printf("\n Enter %d real numbers \n",num);
    for(i=0;i<num;i++)

    {

    scanf("%f", &Price[i]);
   }

  for(i=0; i< num; i++)
   {
     Sum = Sum + Price[i];
   }
  
  Mean = Sum /(float)num;

  for(i=0; i<num; i++)
   {
     Differ = Price[i] - Mean;
     Varsum = Varsum + pow(Differ,2);
   }
  
  Variance = Varsum / (float)num;
  SD = sqrt(Variance);
  
  printf("Mean               = %.2f\n", Mean);
  printf("Varience           = %.2f\n", Variance);
  printf("Standard deviation = %.2f\n", SD);

  
}

