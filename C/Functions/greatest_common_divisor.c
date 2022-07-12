/* C Program to Find G.C.D Using Recursion */


#include "stdio.h"

int GCD(int num1, int num2);

int main() {
    int num1, num2;
    printf("Type two numbers: \n");
    scanf("%d \n %d", &num1, &num2);
    printf("Greatest Common Divisor: %d \n", GCD(num1, num2));
    return 0;
}

int GCD(int num1, int num2) {
    int remainder = num2;
        if (remainder != 0) {
            remainder = num1 % num2;
            printf("%d\n", remainder);
            GCD(num2, remainder);
            // something goes wrong here...
            return remainder;
        }
}

