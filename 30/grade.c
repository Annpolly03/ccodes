#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    float Total, Percentage;

    printf(" Enter the five subjects marks:\n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

    Total = a+b+c+d+e;
    Percentage =(Total/500)*100;

    printf("Total Marks = %.2f\n",Total);
    printf(" Marks Percentage = %.2f", Percentage);
   

     if(Percentage >= 90)
    {
    	printf("\n Grade A");
	}
	else if(Percentage >= 80)
    {
    	printf("\n Grade B");
	}
	else if(Percentage >= 70)
    {
    	printf("\n Grade C");
	}
	else if(Percentage >= 60)
    {
    	printf("\n Grade D");
	}
	else if(Percentage >= 40)
    {
    	printf("\n Grade E");
	}
	else 
    {
    	printf("\n Fail");
	} 
    return 0;
}
