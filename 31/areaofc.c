#include<stdio.h>
#define PI 3.14

#include<stdio.h>
int main()
{
    float radius,area,circumferance;

    printf("\n Enter the radius of a circle \n");
    scanf("%f",&radius);

    area= PI*radius*radius;
    circumferance= 2*PI*radius;

    printf("\n Area of a Circle=%.2f\n",area);
    printf("\n Circumferance of a Circle = 5.2f\n",circumferance);

    return 0;
}