/* Least Common Multiple */
/* !!!do not work for all numbers!!! */

#include <stdio.h>

int main()
{
    // variables declaration
    int n1,n2,n,m;

    // entering numbers
    printf("To find LCM please give me 2 numbers: \n");
    printf("1st: ");
    scanf("%d",&n1);
    printf("2nd: ");
    scanf("%d",&n2);

    // if "n1" is greater than "n2", then swap them
    if (n1>n2) {
        int temp=n1;
        n1=n2;
        n2=temp;
    }

    if (n1==n2) {
        printf("\nLCM = %d\n",n1);
    }
    // works only for 1 iteration back, no more
    else {
        for (int k=1; k<=n1; k++)
        {
            n=k*n1;
            //printf("%d\n",n);

            if (n==m) {
                printf("\nLCM = %d\n",n);
                break;
            }

            for (int i=1; i<=n2; i++)
            {
                m=k*n2;
                //printf("%d\n", m);
            }
        }
    }
    return 0;
}
