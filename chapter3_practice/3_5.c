#include <stdio.h>
#define sec_per_year 3.156e7

int main(void)
{
    float second,year;
    printf("enter how many years old you are£º");
    scanf("%f", &year);
    second = year * sec_per_year;
    printf("you are :%.1f years old.\n", year);
    printf("and you are %e seconds old, too.\n",second);

    return 0;
}