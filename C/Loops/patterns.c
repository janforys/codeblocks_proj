/* C Program to Print Pyramids and Patterns */

/* Author: Jan Forys 2022 */

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

                int half_star_row, half_star_col;
                printf("How many stars ?: ");
                scanf("%d", &half_star_row);
                printf("\n");

                // Row iterator
                for (int r = 0; r < half_star_row; r++) {
                        // Column iterator
                        for (int c = 0; c <= half_star_col; c++) {
                                printf("* ");
                            }
                        printf("\n");
                        half_star_col++;
                    }
                break;


        case 2: printf("[ Half pyramid of numbers ]\n");

                int half_num_row, half_num_col = 0;
                printf("How many numbers ?: ");
                scanf("%d", &half_num_row);
                printf("\n");

                // Row iterator
                for (int r = 0; r < half_num_row; r++) {
                        int num = 0;
                        // Column iterator
                        for (int c = 0; c <= half_num_col; c++) {
                                num++;
                                printf("%d ", num);
                            }
                        printf("\n");
                        half_num_col++;
                    }
                break;


        case 3: printf("[ Half pyramid of alphabets ]\n");

                int half_alpha_row, half_alpha_col = 0, letter = 65;
                printf("How many letters ?: ");
                scanf("%d", &half_alpha_row);
                printf("\n");

                // Row iterator
                for (int r = 0; r < half_alpha_row; r++) {
                    // Column iterator
                        for (int c = 0; c <= half_alpha_col; c++) {
                                printf("%c ", letter);
                            }
                        printf("\n");
                        half_alpha_col++;
                        letter++;
                    }
                break;


        case 4: printf("[ Inverted half pyramid of * ]\n");

                int inv_star_row, inv_star_col;
                printf("How many stars ?: ");
                scanf("%d", &inv_star_row);
                printf("\n");
                inv_star_col = inv_star_row;

                // Row iterator
                for (int r = 0; r < inv_star_row; r++) {
                    // Column iterator
                        for (int c = inv_star_col; c >= 1; c--) {
                                printf("* ");
                            }
                        printf("\n");
                        inv_star_col--;
                    }
                break;


        case 5: printf("[ Inverted half pyramid of numbers ]\n");

                int inv_num_row, inv_num_col;
                printf("How many numbers ?: ");
                scanf("%d", &inv_num_row);
                printf("\n");
                inv_num_col = inv_num_row;

                // Row iterator
                for (int r = 0; r < inv_num_row; r++) {
                        int num = 0;
                        // Column iterator
                        for (int c = 0; c < inv_num_col; c++) {
                                num++;
                                printf("%d ", num);
                            }
                        printf("\n");
                        inv_num_col--;
                    }
                break;


        case 6: printf("[ Full pyramid of * ]\n");

                int full_star_row, full_star_col = 0;
                printf("How many stars ?: ");
                scanf("%d", &full_star_row);
                printf("\n");

                int indentation_1 = full_star_row;

                // Row iterator
                for (int r = 0; r < full_star_row; r++) {
                int p = indentation_1;

                        while (p >= 2) {
                            printf(" ");
                            p--;
                        }
                            // Column iterator
                            for (int c = 0; c <= full_star_col; c++) {
                                    printf("* ");
                                }

                        printf("\n");
                        full_star_col++;
                        indentation_1--;
                    }
                break;


        case 7: printf("[ Full pyramid of numbers ]\n");
                int full_num_row, full_num_col = 0;
                printf("How many rows ?: ");
                scanf("%d", &full_num_row);
                printf("\n");

                int indentation_2 = full_num_row;

                // Row iterator
                for (int r = 0; r < full_num_row; r++) {
                int p = indentation_2, num = 0;

                        while (p >= -2) {
                            printf(" ");
                            p--;
                        }
                            // Column iterator
                            for (int c = 0; c <= full_num_col; c++) {
                                    num++;
                                    printf("%d ", num);
                                }

                        printf("\n");
                        full_num_col += 2;
                        indentation_2 -= 2;

                    }
                break;


        case 8: printf("[ Inverted full pyramid of * ]\n");

                int inv_full_star_row, inv_full_star_col, indentation = 0;
                printf("How many stars ?: ");
                scanf("%d", &inv_full_star_row);
                printf("\n");

                inv_full_star_col = inv_full_star_row;

                // Row iterator
                for (int r = 0; r < inv_full_star_row; r++) {
                    int p = 0;
                    // Column iterator
                        for (int c = inv_full_star_col; c >= 1; c--) {
                                printf("* ");
                            }

                        printf("\n");
                        inv_full_star_col--;
                        indentation++;

                            while (p < indentation) {
                                printf(" ");
                                p++;
                            }
                    }
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
