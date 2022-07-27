/* C Program to Convert Binary Number to Octal and vice-versa

Instruction how to make such conversion:
https://www.electrical4u.com/binary-to-octal-and-octal-to-binary-conversion/ */


#include "stdio.h"
#include "math.h"

long int binary2octal(long int binary_value);
int octal2binary(int octal_value);

int main() {
    long int binary_value, octal_value;
    scanf("%ld", &binary_value);
    printf("%ld \n\n", binary2octal(binary_value));
    //scanf("%d", &octal_value);
    //printf("%d \n", octal2binary(octal_value));
    return 0;
}

long int binary2octal(long int binary_value) {
    /* TODO: Try to rearrange sequence of variables declaration */
    long int power_factor;
    long int sum, sum_result, result = 0;
    long int m, multiplier = 1, counter = 0;

    // 'multiplier' value counting
    long int b = binary_value;
    while (b >= 1) {
        if (counter == 3) {
            multiplier *= 10;
            counter = 0;
        }
        b /= 10;
        counter++;
        printf("%ld\n", multiplier);
    }
    m = multiplier; // to avoid 'multiplier' change
        while (binary_value >= 1) {
        power_factor = 0, sum = 0;
            while (power_factor < 3) {
                sum += binary_value % 10 * pow(2, power_factor);
                binary_value /= 10;
                power_factor++;
            }
            sum_result += sum *= m; // result before reversing
            m /= 10;
        }
    // Reverse 'sum_result' (final result)
    while (sum_result >= 1) {
        result += sum_result % 10 * multiplier;
        sum_result /= 10;
        multiplier /= 10;
    }
    printf("%ld\n", result);
    return result;
}
