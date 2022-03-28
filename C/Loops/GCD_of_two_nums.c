/* is swapping numbers but
do not work for all numbers */

#include <stdio.h>

int main()
{
    int a,b,c,d,e;

    printf("Type A: ");
    scanf("%d",&a);
    printf("Type B: ");
    scanf("%d",&b);

    //swap "a" with "b"
    if (a<b)
    {
        int temp;
        temp=a;
        a=b;
        b=temp;
    }

    c=a%b;
    printf("%d\n",c);
    d=b%c;
    printf("%d\n",d);
    e=c%d;
    printf("%d\n\n",e);

    printf("GCD = %d\n",d);

    return 0;
}
