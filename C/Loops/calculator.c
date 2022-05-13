/* C Program to Make a Simple Calculator Using switch...case */

#include <stdio.h>
#include <math.h>

int main()
{
    int a;

    printf("Type 2 numbers to calculate: \n");
    scanf("%d", &a);

    switch(a) {
        case 1:
        break;

        case 2:
        printf("+\n");
        break;

        case 3:
        printf("-\n");
        break;

        case 4:
        printf("*\n");
        break;
    }

return 0;
}
