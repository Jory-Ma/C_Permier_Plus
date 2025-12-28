#include <stdio.h>

//函数声明
void jolly();
void deny();

int main(void)
{
    for(int i = 0; i<3; i++)
    {
        jolly();
    }

    deny();

    return 0;
}

void jolly()
{
    printf("For he's a jolly good fellow!\n");
}

void deny()
{
    printf("Which nobody can deny!\n");
}