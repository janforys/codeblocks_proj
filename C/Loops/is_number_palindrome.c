/* C Program to check whether a number entered by user is palindrome or not */

#include <stdio.h>

int main()
{

    int n,p,x;
    printf("Enter number to check: ");
    scanf("%d",&n);
    printf("\nYou've entered %d...", n);

    int m=n;

    // reverse n
    do {

        p=n%10;
        n=n/10;
        printf("%d",p);
        //p=p+p;
    } while (n>=1);

    printf("\n\n%d\n%d\n", m, p); // show p and m(n)

    // check if n is not equal to p
    if (m/=p) {
        printf("\n ...and it is not a palindrome.\n\n");
    }
        printf("\n ...and it is palindrome number.\n\n");

return 0;
}
