/* C Program to calculate power of two numbers entered by a user */

#include <stdio.h>

int main()
{
    int b,p,x=1,z,r;

    scanf("%d%d",&b,&p);
    b=b*b;

    while(x<=p)
    {
        r=b*z;
        x++;
        z++;
    }

    printf("\n%d\n",r);

    return 0;
}
