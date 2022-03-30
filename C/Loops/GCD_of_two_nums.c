/* is swapping numbers but
do not work for all numbers */

#include <stdio.h>

int main()
{
    int a,b,c,d;

    printf("Type A: ");
    scanf("%d",&a);
    printf("Type B: ");
    scanf("%d",&b);

    //swap "a" with "b" if a<b
    if (a<b)
    {
        int temp=a;
        a=b;
        b=temp;
    }

    do {
    c=a%b;

    if (c==0) {
        printf("\nGCD = %d\n",b);
        break;
        }
    else {
        //The problem is with 4 lines below...
        //...inside "else" statement.
        int temp=b;
        a=temp;
        b=c;
        d=a%b;
        printf("\nGCD = %d\n",d);
        }
    }
    while (d==0);

    return 0;
}
