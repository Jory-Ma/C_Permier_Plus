#include <stdio.h>
#define cm_per_inch 2.54

int main(void)
{
    float hei;
    printf("请输入你的身高（单位：英寸）：");
    scanf("%f", &hei);
    printf("你的身高为：%.2f inch\n", hei);
    printf("你的身高为：%.2f cm\n",hei * cm_per_inch);

    return 0;
}