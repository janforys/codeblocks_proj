/* C Program to Display Armstrong Number Between Two Intervals.

   User enters two numbers.
   Those numbers define an interval.
   Program need to check if there are some Armstrong numbers
   in an interval mentioned earlier.

   Armstrong number:
   e.g.: abcd... = a^n + b^n + c^n + d^n +  */


#include <stdio.h>

int main()
{
    // Declare global variables
    int interval_1, interval_2;

    printf("Enter two positive numbers which will define an interval: ");
    scanf("%d%d", &interval_1, &interval_2);

    // Swap inputs if first is greater than second
    if (interval_1 > interval_2) {
        int temp = interval_1;
        interval_1 = interval_2;
        interval_2 = temp;
    }

    while (interval_1 < interval_2)
    {
        int num_to_check, power_factor, digit, digit_sum;
        interval_1++;
        num_to_check = interval_1;
        printf("%d\n", num_to_check);

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

        // Displaying results
        if (digit_sum == interval_1) {
            printf("YEEE: %d, ", digit_sum);
        // if "1" print "else"
        } else {
            printf("There aren't any Armstrong numbers.\n");
        }
    }

    return 0;
}
