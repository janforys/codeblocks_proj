/*Multiplication Table*/

#include <stdio.h>

int main()
{
    int k,j=1;

    do  {
        printf("Define size of the table (greater than 0): ");
        scanf("%d",&k);
    }
    while (k<=0);

    //generates multiplication table
    for (j; j<=k; j++)
    {
        printf("%d x %d = %d\n",j,k,k*j);
    }

    return 0;
}
