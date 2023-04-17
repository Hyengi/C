```c
#include <stdio.h>

int main(void)
{
    int size;

    printf("컵의 사이즈(ml)를 입력하시오:");
    scanf("%d", &size);

    if(size>=200)
        printf("large");
    else if(size<200&&size>=100)
        printf("medium");
    else
        printf("small");


    return 0;
}
```
