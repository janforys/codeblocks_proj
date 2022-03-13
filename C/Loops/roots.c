#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,c,x1,x2;
    scanf("%f%f%f",&a,&b,&c);
    //display quadratic equation
    printf("\n%fx^2+%fx+%f\n",a,b,c);
    //solve x1 and x2
    x1=(-b+(sqrt(b*b-4*a*c)))/(2*a);
    x2=(-b-(sqrt(b*b-4*a*c)))/(2*a);

    printf("X1 = %f\n",x1);
    printf("X2 = %f\n",x2);

    return 0;
}
