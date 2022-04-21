/* C Program to check whether a number entered by user is palindrome or not */

#include <stdio.h>

int main()
{

    int n,p,x;
    printf("Enter number to check: ");
    scanf("%d",&n);
    printf("\nYou've entered %d...", n);

    // reverse n
    do {
        p=n%10;
        n=n/10;
        printf("%d",p);
        x=p;
    } while (n>=1);

    printf("\n\n%d\n", x); // show "p"(x)

    // check if n is not equal to p
    if (n/=p) {
        printf("\n ...and it is not a palindrome.\n\n");
    }
        printf("\n ...and it is palindrome number.\n\n");

return 0;
}
