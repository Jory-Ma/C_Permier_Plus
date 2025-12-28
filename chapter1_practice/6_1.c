#include <stdio.h>
#include <locale.h>
//采用wprintf + L"中文"(Unicode输出)

int main(void)
{
    setlocale(LC_ALL,"");//设置本地环境，支持中文
    int toes = 10;

    wprintf(L"toes的两倍为：%d\n", 2*toes);
    wprintf(L"toes的平方为：%d\n", toes*toes);

    return 0;
}