#include <stdio.h>

//函数声明
void br();
void ic();

int main(void)
{
    br();
    printf(", ");
    ic();
    printf("\n");
    ic();
    printf("\n");
    br();

    return 0;
}

void br()
{
    printf("Brazil, Russia");
}

void ic()
{
    printf("India, China");
}