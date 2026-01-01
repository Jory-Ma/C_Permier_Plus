#include <stdio.h>
#define pint_cup 2
#define cup_ounce 8
#define ounce_spoon 2
#define spoon_tea 3

int main(void)
{
    float pint,cup,ounce,spoon, tea;

    printf("请输入品脱数：");
    scanf("%f", &pint);

    cup = pint * pint_cup;
    ounce = cup * cup_ounce;
    spoon = ounce * ounce_spoon;
    tea = spoon * spoon_tea;

    printf("您输入的品脱数为：%f\n", pint);
    printf("约等于：%f 杯\n", cup);
    printf("约等于：%f 盎司\n", ounce);
    printf("约等于：%f 汤勺\n", spoon);
    printf("约等于：%f 茶勺\n", tea);

    return 0;
}