/* do not work for all numbers */

#include <stdio.h>

int main()
{
    int a,b,c,d,e,f,g;

    printf("Type A: ");
    scanf("%d",&a);
    printf("Type B: ");
    scanf("%d",&b);

    // swap "a" with "b" if a<b
    if (a<b)
    {
        int temp=a;
        a=b;
        b=temp;
    }

    c=a%b;
    d=b%c;
    e=c%d;
    f=d%e;
    g=e%f;

    if (c==0) {
        printf("\nGCD = %d\n",b);
        }
    else if (d==0) {
        printf("\nGCD = %d\n",c);
        }
    else if (e==0) {
        printf("\nGCD = %d\n",d);
        }
    else if (f==0) {
        printf("\nGCD = %d\n",e);
        }
    else if (g==0) {
        printf("\nGCD = %d\n",f);
        }
    else {
        printf("\nGCD = %d\n",g);
        }

    return 0;
}
