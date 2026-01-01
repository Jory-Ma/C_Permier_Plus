#include <stdio.h>
#define mass_per_quart 950  //每夸脱的质量
#define mass_per_mole 3.0e-23  //每个分子的质量

int main(void)
{
    float quart; //夸脱数
    float mass;  //质量总数
    float nums;  //总分子数

    printf("请输入夸脱数：");
    scanf("%f", &quart);
    mass = quart * mass_per_quart;
    nums = mass / mass_per_mole;
    printf("水分子的数量为：%e", nums);

    return 0;
}