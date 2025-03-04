#include <stdio.h>
#include <stdlib.h>

int merge(int *list)
{
    int len;
    int first;
    int second_first;

    len = sizeof(list)/sizeof(list[0]);
    first = 0;
    second_first = len/2;
}

int main(void)
{
    int numbers[] = {5, 2, 7, 4, 1, 6, 3, 0};
    merge(numbers);
}