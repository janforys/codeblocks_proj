/* C Program to Convert Binary Number to Octal and vice-versa

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
    int remainder, power_factor, sum1 = 0, sum2 = 0, sum3 = 0;
    while (binary_value >= 1) {
    power_factor = 0, sum1 = 0;
        while (power_factor <= 2) {
            remainder = binary_value % 10;
            sum1 = sum1 + remainder * pow(2, power_factor);
            binary_value /= 10;
            power_factor++;
        }
        printf("%d", sum1);
    }
    printf("\n");
    return 44;
}
