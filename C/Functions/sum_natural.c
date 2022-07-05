/* C Program to Find the Sum of Natural Numbers using Recursion */


#include "stdio.h"

int recursion(int number);

int main() {

    int number;
    printf("Give me some Number: ");
    scanf("%d", &number);
    printf("Your Number is %d.\n", number);
    int result = recursion(number);
    printf("\n%d\n", result);
    printf("Sum of natural numbers is %d.\n", result);
    return 0;
}

int recursion(int number) {
    int num2 = 1, result = 0;
        while(num2 <= number) {
            result += num2;
            num2++;
            printf("%d\n", result);
        }
    return result;
}
