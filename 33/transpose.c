#include<stdio.h>
int main()
{
    int i,j,r,c,a[10][10],b[10][10];

    printf("\n Enter number of rows and columns\n");
    scanf("%d %d", &i,&j);

    printf("\n Enter the Array elements n\n");
    for(r = 0;r<i; r ++)
    {
        for(c = 0; c < j; c ++)
        {
            scanf("%d",&a[r][c]);

        }
    }

    for(r=0;r<i;r++)
    {
        for(c= 0; c < j; c++)
        {
            b[c][r] = a[r][c];
        }
    }
    printf("\n Transpose Matrix elements are: \n");
    for(r = 0; r < j; r++)
    {
       for(c = 0; c < i; c++)
    {
      printf("%d \t ", b[r][c]);
    }
    printf("\n");
  }
 
return 0;
   
    }
