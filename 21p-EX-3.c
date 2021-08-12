#include <stdio.h>

int main()
{
    int a = 0;
    while (a <= 100)
    {
        if (a % 5 == 0)
        {
            printf("%d", a);
        }
        a++;
    }
}