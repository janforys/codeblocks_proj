/* C Program to check whether a number entered by user is palindrome or not */

#include <stdio.h>

int main()
{

int n,p;
scanf("%d",&n);

do {
p=n%10; //reverse n
n=n/10;
printf("%d",p);
} while(n>=1);

//check if n is equal to p
if(n=/p) {
printf("is not a palindrome");
}
printf("it is");

return 0;
}