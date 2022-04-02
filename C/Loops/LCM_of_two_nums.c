/* Least Common Multiple */
/* !!!do not work for all numbers!!! */

#include <stdio.h>

int main()
{
    int n1,n2,k,LCM;

    printf("To find LCM please give me 2 numbers: \n");
    printf("1st: ");
    scanf("%d",&n1);
    printf("2nd: ");
    scanf("%d",&n2);

    for (k; k<=n2; k++)
    {
        LCM=n1*k;
    }

    printf("\nLCM = %d\n", LCM);

    return 0;
}
