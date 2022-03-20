#include <stdio.h>

int main()
{
    double user_fac,count,factorial=1;
    printf("Type how many factorial of a number you want: ");
    scanf("%lf",&user_fac);

    //1*2*3*4*5*6... etc.
    for (count=1; count<=user_fac; count++)
    {
        printf("%lf\n",count);
        factorial*=count;
    }

    printf("Result: %lf\n",factorial);

    return 0;
}
