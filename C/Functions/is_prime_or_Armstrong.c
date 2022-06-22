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
    isPrime(number);

    return 0;
}

void isArmstrong(int number) {
    // some code needed here...
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

