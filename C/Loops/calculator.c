/* C Program to Make a Simple Calculator Using switch...case */

#include <stdio.h>
#include <math.h>

int main()
{

    float x, y;
    char sign;

    printf("Choose operation type ( +, -, *, / ): \n");
    scanf("%c", &sign);

    printf("Enter two numbers to calculate: \n");
    scanf("%f%f", &x, &y);

    switch (sign) {
        case '+': printf("Outcome: %f\n", x + y);
        break;

        case '-': printf("Outcome: %f\n", x - y);
        break;

        case '*': printf("Outcome: %f\n", x * y);
        break;

        case '/': printf("Outcome: %f\n", x / y);
        break;
    }

return 0;
}
