#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height = get_int("Height: ");
    while (height <= 0 || height > 8)
    {
        height = get_int("Height: ");
    }
    int n = 1;
    while (n <= height)
    {
        for (int i = 0; i < (height - n); i++)
        {
            printf(" ");
        }
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("  ");
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
        n++;

    }
}