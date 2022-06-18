/* C Program to Demonstrate the Working of Keyword "long" */


#include <stdio.h>
// Function declaration
void checkNumber(long number);

int main() {

    int a;
    long b, number;
    long long c;

    printf("\nint = %zu BYTES (32 bits) \n", sizeof(a));
    printf("long = %zu BYTES (64 bits) \n", sizeof(b));
    printf("long long = %zu BYTES (64 bits) \n\n", sizeof(c));

    printf("Type some enormous number... ");
    scanf("%ld", &number);
    // Function call. 'number' is passed to the function
    checkNumber(number);

    return 0;
}

// Function definition
void checkNumber(long number) {

    if (number < 2147483647 && number > -2147483647) {
        printf("It's not a 'long' type value.\n");
    } else {
        printf("It is 'long' type value.\n");
    }
}

