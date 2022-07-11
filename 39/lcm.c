#include<stdio.h>
int main()
{
    int n1,n2,maxv;

    printf("Enter two integer values \n");
    scanf("%d%d",&n1,&n2);

    maxv=(n1 > n2)? n1:n2;

    while(1)
    {
        if (maxv % n1 == 0 && maxv % n2 == 0)
        {
            printf("LCM of %d and %d = %d",n1,n2,maxv);
            break;

        }
        ++maxv;
    }
    return 0;
}