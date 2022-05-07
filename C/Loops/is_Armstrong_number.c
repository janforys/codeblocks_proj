/* C Program to Check Armstrong Number.

   User enters a number.
   The program need to check if it is armstrong number or not.

   Divide number to digits (use modulo operator).
   Check if all digits have been used (does amount matter?).
   Raise each digit to the power of n, where: n is amount of digits.
   Sum powered digits.
   Compare result with number entered by a user.

   e.g.: abcd... = a^n + b^n + c^n + d^n + */

#include <stdio.h>

int main()
{
    // Declare variables
    int num_to_check, digit, power_factor;

    printf("Enter positive number: ");
    scanf("%d", &num_to_check);

    // Counting power factor (n)
    /*int a = num_to_check;
    while (a >= 1) {
        a /= 10;
        power_factor++;
    }*/

    // Counting power factor (n)
    for (int a = num_to_check; a >= 1; a /= 10) {
        power_factor++;
    }
    printf("POWER FACTOR = %d\n", power_factor);

    // some comment
    while (num_to_check >= 1) {
        digit = num_to_check % 10;
        printf("%d\n", digit);

            int digit2;
            for (int i=0; i <= power_factor; i++)
            {
                digit2 = digit * i;
            }
            printf("%d\n\n", digit2);

        num_to_check /= 10;
    }

return 0;
}
