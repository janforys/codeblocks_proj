#include <stdio.h>

int main()
{
    int n,c;

    do  {
        printf("Type how many elements of series you want to see: \n");
        scanf("%d",&n);
    }
    while (n<=0);

    for (c; c<n; c++)
    {
        printf("%d ",c);
        int fib,fib1=1,fib2=1;
        printf("%d + %d = %d\n",fib1,fib2,fib);
    }

    return 0;
}
