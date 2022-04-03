/* Least Common Multiple */
/* !!!do not work for all numbers!!! */

#include <stdio.h>

int main()
{
    int n1,n2,n,m;

    printf("To find LCM please give me 2 numbers: \n");
    printf("1st: ");
    scanf("%d",&n1);
    printf("2nd: ");
    scanf("%d",&n2);

    // nested "for" loop is not working as it should
    for (int k=1; k<=n1; k++)
    {
            n=k*n1;
            printf("%d\n", n);

        for (int j=1; j<=n2; j++)
        {
            m=j*n2;
            printf("%d\n", m);
        }
    }

    if (n==m) {
            printf("\nLCM = %d\n", n);
        }

    return 0;
}
