#include <stdio.h>

int main(void)
{
    int num;
    printf("请输入一个ASCII值：\n");
    scanf("%d", &num);
    printf("您输入的ASCII值对应的字符为：%c\n", num);

    return 0;
}