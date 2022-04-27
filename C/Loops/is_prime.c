/* C Program to check whether a number is prime or not */

#include <stdio.h>

int main()
{
// Keep in mind that amount of prime numbers is endless...
// Prime number is a positive integer
int a, x=1;
// Enter number
printf("Enter a number: ");
scanf("%d", &a);
// Check if it divides ONLY by itself and by 1 with no remainder

while (x<a) {
    x++;
    if ( a % x == 0) {
        break;
    } else {
        printf("ITS PRIME!");
    }
}
/*for (int b=1; b<=a; b++)
{
    if ((a % 1 == 0) && (a % a == 0)) {
        printf("ITS PRIME!\n");

    } else {
        printf("ITS NOT.\n");
    }
}*/

// Remember that every number can be divided by 1 and itself, so
//you have to exclude everything beside 1 and your number with
//help of loop
// Simply check by using loop that it divides by other numbers :)

return 0;
}
