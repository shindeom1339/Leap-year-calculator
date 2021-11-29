#include <stdio.h>
int main()
{
    int year;
    scanf("%d", &year);

    // |---------- METHOD 2 ----------|
    if ((year%4==0 && year%100 != 0) || year%400==0)
    {
        printf("Is a leap year\n");
    }

    else
    {
        printf("Not a leap year\n");
    }

    return 0;
}