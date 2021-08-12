#include <stdio.h>

int main()
{
    int number = 1;
    int multi = 1;

    while (1)
    {
        multi = multi * number;
        if (multi >= 50000)
        {
            printf("%d", number);
            break;
        }
        number++;
    }
}