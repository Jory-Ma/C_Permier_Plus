#include <stdio.h>

//将年龄转化为天数，不考虑闰年
int main(void)
{
    int age;
    age = scanf("%d", &age);

    printf("你的年龄为：%d岁\n", age);
    printf("你的年龄转化为天数为：%d天", age * 365);

    return 0;
}