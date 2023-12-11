#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int start_size = get_int("Start size? ");
    while (start_size < 9)
    {
        start_size = get_int("Start size?");
    }
    // TODO: Prompt for end size
    int end_size = get_int("End size? ");
    while (end_size < start_size)
    {
        end_size = get_int("End size?");
    }
    // TODO: Calculate number of years until we reach threshold
    int population_progression = start_size;
    int n = 0;
    while (population_progression < end_size)
    {
        population_progression = population_progression + (population_progression / 3) - (population_progression / 4);
        n++;
    }
    // TODO: Print number of years
    printf("Years: %i\n", n);
}
