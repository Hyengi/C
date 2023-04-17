

```c
#include <stdio.h>

int main(void)
{
    int num1, num2, result;

    printf("분자와 분모를 입력하시오:");
    scanf("%d %d", &num1, &num2);

    if(num2==0)
    {
        printf("0으로는 나눌 수는 없습니다.");
    }
    else
    {
        result = num1/num2;
        printf("결과는 %d입니다.",result);
    }


    return 0;
}
```
