/* C Program to check whether a number is prime or not */

#include <stdio.h>

int main()
{
    // Keep in mind that amount of prime numbers is endless...
    // Prime number is a positive integer

    int a;

    // Enter number
    printf("Enter a positive number: ");
    scanf("%d", &a);

    // Check if it divides ONLY by itself and by 1 with no remainder
    for (int x=2; x<a; x++) {

        // that condition do not work for number 9
        /*if (a % x != 0) {
            continue;
            //printf("IT'S PRIME!\n");
        }*/

        if (a % x == 0) {
            printf("IT IS NOT PRIME!\n");
            break;
        }
        else
        {
            //continue;
            printf("IT'S PRIME!\n");
            break;
        }
    }
    // Remember that every number can be divided by 1 and itself, so
    //you have to exclude everything beside 1 and your number with
    //help of loop
    // Simply check by using loop that it divides by other numbers :)

return 0;
}
