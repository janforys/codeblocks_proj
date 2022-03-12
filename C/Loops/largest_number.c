#include <stdio.h>

int main()
{
    double a,b,c;
    scanf("%lf%lf%lf", &a, &b, &c);

    if ((a>b)&&(a>c))
        {
            printf("The largest is %lf", a);
        }
    else if ((c>a)&&(c>b))
        {
            printf("The largest is %lf", c);
        }
    else
        {
            printf("The largest is %lf", b);
        }
    return 0;
}
