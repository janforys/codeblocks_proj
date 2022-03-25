#include <stdio.h>

int main()
{
    int a=30,b=36,c;
    //scanf("%d%d",&a,&b);
    do {
    c=a%b;
    a=b;
    b=c;
    }
    while(b==0);
    printf("%d\n",a);

       /* if (b==0) {
            printf("%d",a);
        }
        else
            printf("go to 1");*/

    return 0;
}
