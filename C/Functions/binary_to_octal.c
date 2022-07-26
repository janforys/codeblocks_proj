/* C Program to Convert Binary Number to Octal and vice-versa

Instruction how to make such conversion:
https://www.electrical4u.com/binary-to-octal-and-octal-to-binary-conversion/ */


#include "stdio.h"
#include "math.h"

int binary2octal(int binary_value);
int octal2binary(int octal_value);

int main() {
    int binary_value, octal_value;
    scanf("%d", &binary_value);
    printf("%d \n\n", binary2octal(binary_value));
    //scanf("%d", &octal_value);
    //printf("%d \n", octal2binary(octal_value));
    return 0;
}

int binary2octal(int binary_value) {
    int power_factor, sum, sum_result, result = 0;
    int m, multiplier = 1, counter = 0;

    // 'multiplier' value counting
    int b = binary_value;
    while (b >= 1) {
        if (counter == 3) { // TODO: counter has to be fixed
            multiplier *= 10;
            counter = 0;
        }
        b /= 10;
        counter++;
        //printf("%d\n", b);
        //printf("%d\n", multiplier);
        //printf("%d\n", counter);
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
    //printf("%d\n", multiplier);
    // TODO: What about do-while loop??
    do {
        result += sum_result % 10 * multiplier;
        sum_result /= 10;
        printf("%d\n", multiplier);
        multiplier /= 10;
        printf("%d\n", multiplier);
    } while (sum_result >= 1);

    return result;
}
