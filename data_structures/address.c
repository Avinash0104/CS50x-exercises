#include <stdio.h>

int main(void)
{
    int n;
    int *p;

    n = 50;
    p = &n;
    printf("%d\n", *p);
}