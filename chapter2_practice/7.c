#include <stdio.h>

//函数声明
void smile();

int main(void)
{
    smile();
    smile();
    smile();
    printf("\n");
    smile();
    smile();
    printf("\n");
    smile();

    return 0;
}

void smile()
{
    printf("smile!");
}