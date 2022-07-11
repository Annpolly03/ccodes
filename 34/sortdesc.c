#include<stdio.h>
int main()
{
    int Array[50],i,j,temp,size;

    printf("\n Enter the number of elements in an array: ");
    scanf("%d",&size);

    printf("\n Enter %d elements of an array \n",size);
    for(i = 0;i < size; i++)
    {
        scanf("%d,&Array[i]");

    }
    for(i=0;i< size;i++)
    {
        for (j = i + 1; j < size; j++)
		{
			if(Array[i] < Array[j])
			{
				temp = Array[i];
				Array[i] = Array[j];
				Array[j] = temp;
			}
			
		}
	}
	printf("\n ** Array of Elemenst in Descending Order are :  **\n");
	for (i = 0; i < size; i++)
	{
		printf("%d\t", Array[i]);
	}
	
	return 0;
    }
