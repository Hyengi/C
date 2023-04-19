```c
#include <stdio.h>
int max(int x, int y);


int main(void)
{
int value = max(10,20);

printf("%d",value);

return 0;

}

int max(int x, int y)
{
    if(x>y)
        return x;
    else   
        return y;
}
```
