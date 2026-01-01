#include <stdio.h>

int main(void)
//第6题输出中文的另一种方法
/*在 VS Code 的右下角找到编码标识（默认显示 “UTF-8”）；
  点击该编码标识，在弹出的菜单中选择 “通过编码保存”；
  在新弹出的编码列表中，搜索并选择 “GBK”
  重新编译代码，然后直接运行程序，中文会在默认终端中正常显示*/
{
    int toes = 10;

    printf("toes的两倍为：%d\n", 2*toes);
    printf("toes的平方为：%d\n", toes*toes);

    return 0;
}