#include<stdio.h>

int main(void)
{
    int i = 0;
    do
    {
        if (i == 5)
            break;
        printf("%d\n", i);
        i++;
    }
    while (i <= 10);
    return 0;
}