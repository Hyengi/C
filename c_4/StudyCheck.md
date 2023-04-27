```c
#include <stdio.h>

int main(void)
{
    int x = 20, y = 10;

    printf("두수의 합: %d\n", x+y);
    printf("두수의 차: %d\n", x-y);
    printf("두수의 곱: %d\n", x*y);
    printf("두수의 몫: %d\n", x/y);            



    return 0;
}
```

```c
#include <stdio.h>

int main(void)
{
    int x=0, y=0;

    printf("첫번째 숫자를 입력하시오: ");
    scanf("%d",&x);

    printf("두번째 숫자를 입력하시오: ");
    scanf("%d",&y);

    printf("두수의 합:%d",x+y);

    return 0;
}
```

```c
#include <stdio.h>

int main(void)
{
    double r=0, x=0;

    printf("반지름을 입력하시오: ");
    scanf("%lf",&r);

    x=r*r*3.14;

    printf("원의 면적: %lf", x);


    return 0;
}
```

```c
#include <stdio.h>

int main(void)
{
    double rate = 0, usd = 0;
    int krw;

    printf("환율을 입력하시오: ");
    scanf("%lf",&rate);

    printf("원화 금액을 입력하시오: ");
    scanf("%d",&krw);

    usd = krw/rate;

    printf("원화 %d원은 %lf달러입니다.",krw,usd);


    return 0;
}
```

```c
#include <stdio.h>

int main(void)
{
    double x=0,y=0,z=0;

    printf("3개의 실수를 입력하시오: ");
    scanf("%lf %lf %lf",&x,&y,&z);

    printf("합계=%.2lf",x+y+z);
    printf("평균=%.2lf",(x+y+z)/3);
    

    return 0;
}
```

```c
#include <stdio.h>

int main(void)
{
    double w,h,area=0,perimeter=0;

    w=10.0;
    h=5.0;
    area= w*h;
    perimeter=2*(w+h);

    printf("사각형의 넓이: %lf",area);
    printf("\n사각형의 둘레: %lf",perimeter);

    
    return 0;
}
```

```c
#include <stdio.h>
#include <limits.h>

int main(void)
{
    short s_money = SHRT_MAX;
    unsigned short u_money = USHRT_MAX;

    s_money = s_money + 1;
    printf("s_money = %d\n", s_money);
    
    u_money = u_money + 1;
    printf("u_money = %d", u_money); 

    return 0;
}
```

```c
#include <stdio.h>

int main(void)
{
    int x = 10;
    int y = 010;
    int z = 0x10;

    printf("x=%d",x);
    printf("y=%d",y);
    printf("z=%d",z);
    
    return 0;
}
```

```c
#include <stdio.h>

int main(void)
{
    double x,y,z;

    x=300000;
    y=149600000;

    z=y/x;

    printf("빛의 속도는 %lfkm/s\n",x);
    printf("태양과 지구와의 거리 %lfkm\n",y);
    printf("도달 시간은 %lf초",z);
    
    

    return 0;
}
```

```c
#include <stdio.h>

int main(void)
{
    int x, y, result;
    printf("두개의 정수를 입력하시오:");
    scanf("%d %d", &x, &y);

    result = x + y;
    printf("%d + %d = %d\n",x,y,result);
    result = x - y;
    printf("%d - %d = %d\n",x,y,result);
    result = x * y;
    printf("%d * %d = %d\n",x,y,result);
    result = x / y;
    printf("%d / %d = %d\n",x,y,result);
    result = x % y;
    printf("%d %% %d = %d",x,y,result);
    
    return 0;
}
```

```c
#include <stdio.h>

int main(void)
{
    double x, y, result;
    printf("두개의 정수를 입력하시오:");
    scanf("%lf %lf", &x, &y);

    result = x + y;
    printf("%lf + %lf = %lf\n",x,y,result);
    result = x - y;
    printf("%lf - %lf = %lf\n",x,y,result);
    result = x * y;
    printf("%lf * %lf = %lf\n",x,y,result);
    result = x / y;
    printf("%lf / %lf = %lf\n",x,y,result);
    
    return 0;
}
```

```c
#include <stdio.h>
#define SEC_PER_MINUTE 60

int main(void)
{
    int input, minute, second;
    
    printf("초를 입력하시요:");
    scanf("%d", &input); 
    
    minute = input / SEC_PER_MINUTE;
    second = input % SEC_PER_MINUTE;

    printf("%d초는 %d분 %d초입니다.",
            input, minute, second); 
    
    return 0;
}
```
