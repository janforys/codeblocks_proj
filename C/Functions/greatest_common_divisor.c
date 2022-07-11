/* C Program to Find G.C.D Using Recursion */


#include "stdio.h"

int GCD(int num1, int num2);

int main() {
    int num1, num2;
    printf("Type two numbers: \n");
    scanf("%d\n%d", &num1, &num2);
    printf("Greatest Common Divisor: %d \n", GCD(num1, num2));
    return 0;
}

int GCD(int num1, int num2) {
    int remainder;
        if (num1 > num2) {
            int x = num1;
            num1 = num2;
            num2 = x;
        }
        if (remainder != 0) {
            remainder = num2 % num1;
            return GCD(remainder, num2);
        } else {
            return remainder;
        }
}

