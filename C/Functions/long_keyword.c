/* C Program to Demonstrate the Working of Keyword "long" */


#include <stdio.h>

void checkNumber(int number) {
    if (number < 2147483647 && number > -2147483647) {
            printf("Nie jest to liczba typu long.");
        }
        else {
            printf("Jest to liczba typu long.");
        }
}

int main() {

    int a;
    long b;
    long long c;
    long number;

    printf("\nint = %zu BYTES (32 bits) \n", sizeof(a));
    printf("long = %zu BYTES (64 bits) \n", sizeof(b));
    printf("long long = %zu BYTES (64 bits) \n\n", sizeof(c));

    printf("Podaj jakas ogromna liczbe... ");
    scanf("%ld", &number);
    printf("%ld \n", number);

    void checkNumber(int number);

    return 0;
}

