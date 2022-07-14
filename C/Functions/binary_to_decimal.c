/* C Program to Convert Binary Number to Decimal and vice-versa.

https://www.electrical4u.com/binary-to-decimal-and-decimal-to-binary-conversion/ */


#include "stdio.h"
#include "math.h"

int binary2decimal(int binary_value);
int decimal2binary(int decimal_value);

int main() {
    int binary_value;
    scanf("%d", &binary_value);
    printf("%d \n", binary_value);
    binary2decimal(binary_value);
    return 0;
}

int binary2decimal(int binary_value) {
    int power_factor = 0, power_result, base, sum;
    while (binary_value >= 1) {
        base = binary_value % 10;
        // Count power of base(2)
        power_result = pow(2, power_factor);
        sum = sum + base * power_result;
        binary_value /= 10;
        //printf("%d\n", power_factor);
        // 'power_factor' is a weight of digits
        power_factor++;
        printf("%d\n", power_result);
    }
    //return 0;
}
