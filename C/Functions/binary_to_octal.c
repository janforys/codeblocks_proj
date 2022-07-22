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
    int power_factor, sum, sum_result, m1, multiplier = 1;
    /*for (int b = binary_value; b >= 1; b /= 10) {
        multiplier *= 10;
    }*/
    m1 = multiplier;
        while (binary_value >= 1) {
        power_factor = 0, sum = 0;
            while (power_factor <= 2) {
                sum += binary_value % 10 * pow(2, power_factor);
                binary_value /= 10;
                power_factor++;
            }
            sum_result += sum *= m1;
            m1 /= 10;
        }
    printf("%d", sum_result);
    printf("\n");
    return 777;
}
