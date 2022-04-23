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
        x=x*10+p;
        n=n/10;
        printf("%d",p);
        
    } while (n>=1);

    printf("\n\n%d\n%d\n", m, x); // show x and m(n)

    // check if n is not equal to x
    if (m/=x) {
        printf("\n ...and it is not a palindrome.\n\n");
    }
        printf("\n ...and it is palindrome number.\n\n");

return 0;
}
