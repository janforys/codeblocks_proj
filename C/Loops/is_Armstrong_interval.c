/* C Program to Display Armstrong Number Between Two Intervals.

   User enters two numbers.
   Those numbers define an interval.
   Program need to check if there are some Armstrong numbers
   in mentioned interval.

   Armstrong number:
   e.g.: abcd... = a^n + b^n + c^n + d^n +  */


#include <stdio.h>

int main()
{
    // Declare global variables
    int interval_1, interval_2;

    printf("Enter two positive numbers which will define an interval: \n");
    scanf("%d%d", &interval_1, &interval_2);

    // Swap inputs if first is greater than second
    if (interval_1 > interval_2) {
        int temp = interval_1;
        interval_1 = interval_2;
        interval_2 = temp;
    }

    while (interval_1 < interval_2 - 1)
    {
        int num_to_check, power_factor, digit, digit_sum;
        interval_1++;
        digit_sum = 0, power_factor = 0; // reset values
        num_to_check = interval_1;

        // Counting power factor (n)
        for (int a = num_to_check; a >= 1; a /= 10) {
            power_factor++;
        }

        // Digitize number
        while (num_to_check >= 1) {

            digit = num_to_check % 10;
            num_to_check /= 10;

                // Raise each digit to power
                int power_result = 1;
                for (int i=1; i <= power_factor; i++) {
                    power_result *= digit;
                }

                // Summarize powered digits
                digit_sum += power_result;
        }

        // TODO: Displaying results
        printf("\n%d\n", digit_sum);
    }

    return 0;
}
