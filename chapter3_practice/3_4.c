#include <stdio.h>

int main(void)
{
    float a;
    printf("Enter a floating-point value£º");
    scanf("%f", &a);
    printf("fixed-point notation£º%f\n", a);
    printf("exponential£º%e\n", a);
    printf("p notation£º%a\n", a);

    return 0;
}