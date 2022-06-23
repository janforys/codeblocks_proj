/* C Program to Check Prime or Armstrong Number Using User-defined Function */


#include <math.h>
#include <stdio.h>

void isArmstrong(int number);
void isPrime(int number);

int main() {

    int number;
    printf("Number: ");
    scanf("%d", &number);

    isArmstrong(number);
    //isPrime(number);

    return 0;
}

void isArmstrong(int number) {
    int remainder, power = 1, num = number, count = 0;
        do {
            number /= 10;
            count++;
        } while (number >= 1);

        do {
            remainder = num % 10;
            for (int i = 1; i <= count; i++) {
                    power *= remainder;
                }
            num /= 10;
            printf("%d ", power);
        } while (num >= 1);
}

void isPrime(int number) {
    int flag = 0;
        for (int n = 2; n < number; n++) {
                if (number % n == 0) {
                    flag = 1;
                    break;
                }
        }
    if (flag == 0) {
        printf("Is prime.\n");
    }
}

