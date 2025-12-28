#include <stdio.h>

//函数声明
void one_three();
void two();

int main()
{
    printf("starting now:\n");
    one_three();
    printf("done!");

    return 0;
}

void one_three()
{
    printf("one\n");
    two();
    printf("three\n");
}

void two()
{
    printf("two\n");
}