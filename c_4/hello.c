#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a, b, c;

    scanf("%d %d", &a , &b);

    c= a*(b%10);
    printf("%d\n", c);

    c= a*(b/10%10);
    printf("%d\n", c);

    c= a*(b/100);
    printf("%d\n", c);

    printf("%d",a*b);

    return 0;

}