#include <stdio.h>
#include <float.h>  //提供浮点数极值常量
#include <limits.h> //提供整数极值常量

int main(void)
{
    //整数上溢
    int int_max = INT_MAX;
    int int_overflow = int_max + 1;
    printf("=====整数上溢测试=====\n");
    printf("int类型最大值：%d\n", int_max);
    printf("int最大值+1：%d\n", int_overflow);

    //浮点数上溢
    double double_max = DBL_MAX;
    double double_overflow = double_max*2;
    printf("=====浮点数上溢测试=====\n");
    printf("double类型最大值：%E\n", double_max);
    printf("double最大值*2：%E\n", double_overflow);

    //浮点数下溢
    double double_min = DBL_MIN;
    double double_underflow = double_min / 2;
    printf("=====浮点数下溢测试=====");
    printf("double类型最小值：%E\n", double_min);
    printf("double最小值/2：%E\n", double_underflow);

    return 0;
}