/* C Program to Find the Sum of Natural Numbers using Recursion */


#include "stdio.h"

int recursion(int number);

int main() {

    int number;
    printf("Give me some Number: ");
    scanf("%d", &number);
    printf("Your Number is %d.\n", number);
    int result = recursion(number);
    printf("Sum of natural numbers is %d.", result);

    return 0;
}

int recursion(int number) {
    int sum;
    // some code needed here...
    return sum;
}
