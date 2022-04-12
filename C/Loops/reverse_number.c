#include <stdio.h>

int main()
{

int a,R;
scanf("%d",&a);
R=a;

do {
R=a%10;
a/=10;
printf("/n%d/n",R);
} while (a>=1)

return 0
}