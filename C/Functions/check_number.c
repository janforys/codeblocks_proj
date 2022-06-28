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
    int prime_1, prime_2, sum, flag = 0, marker_1 = 0, marker_2 = 0;

    for (prime_1 = 2; prime_1 < user_number; prime_1++) {
        for (int i = 2; i < prime_1; i++) {
            if (prime_1 % i == 0) {
                marker_1 = 1;
                break;
            }
        }
        if (marker_1 == 0) {
           for (prime_2 = 2; prime_2 < user_number; prime_2++) {
               for (int j = 2; j < prime_2; j++) {
                   if (prime_2 % j == 0) {
                        marker_2 = 1;
                        break;
                   }
               }
           }
        }
    }

    return flag;
}
