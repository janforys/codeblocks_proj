#include <stdio.h>

int main()
{
    int base_year=2020, user_year;
    scanf("%d",&user_year);
    printf("Base: %d\nUser: %d\n",base_year,user_year);

    int diff=(user_year-base_year)/4;
    int base_leap=(base_year/4+diff);
    printf("%d\n",base_leap);

    if (user_year/4==base_leap)
        {
            printf("This is leap year.\n");
        }
    else
        {
            printf("This isn't leap year.\n");
        }

    return 0;
}
