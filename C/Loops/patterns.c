/* C Program to Print Pyramids and Patterns */

/* Switch..case statement with different program choose
   options:
   Half pyramid of *, Half pyramid of numbers, Half
   pyramid of alphabets, Inverted half pyramid of *,
   Inverted half pyramid of numbers, Full pyramid of *,
   Full pyramid of numbers, Inverted full pyramid of *,
   Pascal's Triangle, Floyd's Triangle. */


#include <stdio.h>

int main()
{
    int example;

    label: // goto
    printf("Choose an example (1-10): ");
    scanf("%d", &example);

    switch (example) {

        case 1: printf("[ Half pyramid of * ]\n");
                int row, col = 1;
                printf("How many stars ?: ");
                scanf("%d", &row);
                printf("\n");

                // Row iterator
                for (int k = 0; k < row; k++) {
                        // Column iterator
                        for (int j = 0; j < col; j++) {
                            printf("* ");
                            }
                        printf("\n");
                        col++;
                    }
                break;

        case 2: printf("[ Half pyramid of numbers ]\n");
                break;

        case 3: printf("[ Half pyramid of alphabets ]\n");
                break;

        case 4: printf("[ Inverted half pyramid of * ]\n");
                break;

        case 5: printf("[ Inverted half pyramid of numbers ]\n");
                break;

        case 6: printf("[ Full pyramid of * ]\n");
                break;

        case 7: printf("[ Full pyramid of numbers ]\n");
                break;

        case 8: printf("[ Inverted full pyramid of * ]\n");
                break;

        case 9: printf("[ Pascal's Triangle ]\n");
                break;

        case 10: printf("[ Floyd's Triangle ]\n");
                 break;

        default: printf("Choose another\n");
                 goto label;
        }

return 0;
}
