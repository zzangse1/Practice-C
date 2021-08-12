#include <stdio.h>

int main()
{
    char eng = 'A';

    while (eng <= 'E')
    {
        printf("%c ", eng++);
        eng++;
    }
    while (eng <= 'Z')
    {
        printf("%c ", eng++);
    }
}