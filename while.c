#include <stdio.h>

int main()
{
    int i = 5;
    do
    {
        printf("%d\n", i);
        i = i - 2;
    } while (i >= 1);

    return 0;
}