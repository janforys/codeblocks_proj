/* C Program to Check Whether a Number can be Expressed as Sum
of Two Prime Numbers */


#include <stdio.h>
#include <math.h>

int checkNumber(int user_number);

int main() {

    int user_number, flag;
    printf("Enter positive number: ");
    scanf("%d", &user_number);
    printf("%d \n", user_number);

    checkNumber(user_number); // F-ction

    if (flag == 1) {
        printf("Can be expressed\n");
    } else {
        printf("Cannot be expressed\n");
    }

    return 0;
}

int checkNumber(int user_number) {
    int prime_1, prime_2, sum, flag = 0;

    // some code needed here...

    return flag;
}
