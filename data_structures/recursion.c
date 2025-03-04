#include <stdio.h>

void    draw(int n)
{
    if (n <= 0)
    {
        return;
    }
    draw(n - 1);
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
}

int main(int argc, char **argv)
{
    int height;
    
    if (argc == 2)
    {
        height = argv[1][0] - '0';
    }

    draw(height);
}