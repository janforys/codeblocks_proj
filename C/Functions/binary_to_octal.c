/* C Program to Convert Binary Number to Octal and vice-versa

Instruction how to make such conversion:
https://www.electrical4u.com/binary-to-octal-and-octal-to-binary-conversion/

Jan Forys 2022 */


#include "stdio.h"
#include "math.h"
//#include "binary_to_decimal.c"

long binary2octal(long binary_value);
int octal2binary(int octal_value);
int decimal2binary(int decimal_value);

int main() {
    long binary_value;
    int octal_value;
    scanf("%ld", &binary_value);
    printf("%ld \n\n", binary2octal(binary_value));
    scanf("%d", &octal_value);
    printf("%d \n", octal2binary(octal_value));
    return 0;
}

long binary2octal(long binary_value) {
    long sum, sum_result, result = 0;
    long m, multiplier = 1, counter = 0;
    long b, power_factor;

    // 'multiplier' value counting
    for (b = binary_value; b /= 10; b >= 1) {
        if (counter == 3) {
            multiplier *= 10;
            counter = 0;
        }
        counter++;
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
    // Reverse 'sum_result' to get final result
    do {
        result += sum_result % 10 * multiplier;
        sum_result /= 10;
        multiplier /= 10;
    } while (sum_result >= 1);
    return result;
}

int octal2binary(int octal_value) {
/* TODO: Change 'binary_digit' from string to number.
         Put 'decimal2binary' function into separate library file. */
    int binary_digit;
    while (octal_value >= 1) {
        binary_digit = decimal2binary(octal_value % 10);
        octal_value /= 10;
        printf("%d", binary_digit);
    }
    printf("%d\n");
    return 777;
}

int decimal2binary(int decimal_value) {
    int m, multiplier = 1, sum = 0, sum_result = 0;
    // Count 'multiplier' value, needed for remainder multiplying
    for (int d = decimal_value; d > 1; d /= 2) {
        multiplier *= 10;
    }
    m = multiplier; // to avoid 'multiplier' change
        while (decimal_value >= 1) {
            sum += decimal_value % 2 * m;
            decimal_value /= 2;
            m /= 10;
        } do { // converting to result value
            sum_result += sum % 10 * multiplier;
            sum /= 10;
            multiplier /= 10;
        } while (sum >= 1);
    return sum_result;
}
