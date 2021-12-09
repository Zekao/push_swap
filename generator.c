#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int    doublons(int *tab, int size)
{
    int    i;
    int    j;

    i = 0;
    j = 0;
    while (i < size - 1)
    {
        while (++j < size)
            if (tab[i] == tab[j])
                return (1);
        j = ++i;
    }
    return (0);
}

int    main(int ac, char **av)
{
    int    *tab;
    int    size;
    int    i;

    if (ac < 2)
        return (0);
    srand(time(NULL));
    size = atoi(av[1]);
    tab = malloc(sizeof(int) * size);
    i = 0;
    while (i < size)
    {
        tab[i] = (rand() % 10000) - 5000;
        if (!(doublons(tab, i + 1)))
            i++;
    }
    i = -1;
    while (++i < size)
        printf("%d ", tab[i]);
    free(tab);
    return (0);
}