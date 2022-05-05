/* C Program to Display Prime Numbers Between Two Intervals */

/* User enters two numbers.
   Between those two numbers program has to find
   how many prime numbers are. */

#include <stdio.h>

int main()
{
    // Declare variables
    int interval_1, interval_2, primes = 0;

    // Enter numbers that will define an interval
    printf("Enter first positive number: ");
    scanf("%d", &interval_1);

    printf("Enter second positive number: ");
    scanf("%d", &interval_2);

    // Check if each number from an interval
    //divides ONLY by 1 and by itself (is prime or not).
    while (interval_1 <= interval_2) {
        int temp = 0;
            for (int n = 2; n < interval_1; n++) {
                if (interval_1 % n == 0) {
                    temp = 1;
                    break;
                }
            }
        if (temp != 1) {
                primes++;
            }
        interval_1++;
    }

    // Result
    printf("\nAmount of prime numbers: %d\n", primes);

return 0;
}
