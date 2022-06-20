/* C Program to Display Prime Numbers Between Intervals Using Function */


#include <stdio.h>

int primes(int num1, int num2);

int main() {

    int num1, num2;
    printf("Type two numbers to define an interval: \n");
    scanf("%d%d", &num1, &num2);
    primes(num1, num2); // Function

    return 0;
}

int primes(int num1, int num2) {
    // Swap 'num1' with 'num2'
    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    for (num1; num1 + 1 < num2; num1++) {
        // some code here needed
    }
}
