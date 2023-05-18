```c
#include <stdio.h>

int main(void)
{
    int s, e;

    while(1)
    {
        scanf("%d %d", &s, &e);
        if((s<2||e<2)||(s>9||e>9))
        {
            printf("\"INPUT ERROR!\"\n");
        }
        else
        {
            break;
        }
    }

    for(int i = 1; i<=9; i++)
    {
        if(s>e)
        {
            for(int j = s; j >= e; j--)
            {
                printf("%d * %d = %2d    ", j, i, i*j);
            }
        }
        else
        {
            for(int j = s; j <= e; j++)
            {
                printf("%d * %d = %2d   ", j, i, i*j);
            }
        }
        printf("\n");
    }


    return 0;
}
```
