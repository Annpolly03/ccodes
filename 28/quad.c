#include <stdio.h>
#include<math.h>
int main()
{
	float a, b, c;
	float r1, r2, img, dis;
	
	printf("\n Please Enter values of a, b, c :  ");
  	scanf("%f%f%f", &a, &b, &c);
  	
  	dis = (b * b) - (4 * a *c);
  	
  	if(dis > 0)
  	{
  		r1 = (-b + sqrt(dis) / (2 * a));
  		r2 = (-b - sqrt(dis) / (2 * a));
		printf("\n Two Distinct Real Roots Exists: root1 = %.2f and root2 = %.2f", r1, r2);
  	}
  	else if(dis == 0)
  	{
  		r1 = r2 = -b / (2 * a);
  		printf("\n Two Equal and Real Roots Exists: root1 = %.2f and root2 = %.2f", r1, r2);
  	}
  	else if(dis < 0)
  	{
  		r1 = r2 = -b / (2 * a);
  		img= sqrt(-dis) / (2 * a);
  		printf("\n Two Distinct Complex Roots Exists: root1 = %.2f+%.2f and root2 = %.2f-%.2f", r1, img, r2, img);
  	}
	
  	return 0;
}