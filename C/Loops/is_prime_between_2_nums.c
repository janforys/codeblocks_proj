/* C Program to Display Prime Numbers Between Two Intervals */

/* User enters two numbers.
   Between those two numbers program has to find
   how many prime numbers are. */

#include <stdio.h>

int main()
{
    int user_num_1, user_num_2, temp=0, count=0;

    // Enter numbers
    printf("Enter a positive number: ");
    scanf("%d", &user_num_1);

    printf("Enter again a positive number: ");
    scanf("%d", &user_num_2);

    // Check if it divides by other than itself and 1
    for (int x = user_num_1; x <= user_num_2; x++) {
        printf("%d\n", x);
        if (x % x == 0) {
            //temp = 1;
            //break;
            count++;
        }
    }

    printf("%d", count);

return 0;
}
