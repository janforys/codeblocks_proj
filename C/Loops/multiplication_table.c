#include <stdio.h>

int main()
{
    /*5X5 Multiplication Table*/
    int i,j=1;
    //printf("Type how many: ");
    //scanf("%d%d",&i,&j);

    //generates 5x5 multiplication table
    for (i=1; i<=5; i++)
    {
        printf("%d ",j*i);
    }
    printf("\n");
    for (i=1; i<=5; i++)
    {
        printf("%d ",j*2*i);
    }
    printf("\n");
    for (i=1; i<=5; i++)
    {
        printf("%d ",j*3*i);
    }
    printf("\n");
    for (i=1; i<=5; i++)
    {
        printf("%d ",j*4*i);
    }
    printf("\n");
    for (i=1; i<=5; i++)
    {
        printf("%d ",j*5*i);
    }
    printf("\n");

    return 0;
}
