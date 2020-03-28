#include <stdio.h>
#include <stdlib.h>
#include "ft_stock_par.h"
#include <unistd.h>


char	**ft_split_whitespaces(char *str);


void    ftputchar(char c)
{
    write(1, &c, 1);
}


int ftstrlen(char *str)
{
    int i = 0;
    while(str[i])
        i++;
    return(i);
}

char *ftstrdup(char *str)
{
    char *ptr;
    ptr = malloc(sizeof(str));
    int i = 0;
    while(str[i])
    {
        ptr[i] = str[i];
        i++;
    }
    return(ptr);
}
struct strc *ft_param_to_tab(int ac, char **av)
{
    int i = 0;
    int j = 0;
    strc *ptr;

    ptr = malloc(sizeof(strc) * (ac+1));

    while(av[i])
    {
        ptr[j].size_param = ftstrlen(av[i]);
        ptr[j].str = av[i];
        ptr[j].copy = ftstrdup(av[i]);
        ptr[j].tab = ft_split_whitespaces(av[i]);
        i++;
        j++;
        if (i == ac)
            break;

    }
        ptr[j].size_param = NULL;
        ptr[j].str = NULL;
        ptr[j].copy = NULL;
        ptr[j].tab = NULL;

    return (ptr);

}

void ft_show_tab(struct strc *par)
{
    int i = 0;
    int j = 0;
    int k = 0;

    int m = 0;
    int n = 0;
  //par[0].size_param = NULL;

    while(par[i].size_param != NULL)
    {

        while(par[i].copy[k])
        {
            ftputchar(par[i].copy[k]);
            k++;
        }
        k = 0;

        ftputchar('\n');

        ftputchar(par[i].size_param + '0');

        ftputchar('\n');

        while(par[i].tab[m])
        {
            while(par[i].tab[m][n])
            {
                ftputchar(par[i].tab[m][n]);
                n++;
            }
            ftputchar('\n');
            n = 0;
            m++;
        }
        m = 0;
        i++;

    }
}

int main()
{
        char *tab[] = {"Azden ha", "Imran ha", "Mouad ha", "Ahmed ha"};
//    printf("%s", ft_param_to_tab(4, tab)[2].tab[1]);

    ft_show_tab (ft_param_to_tab(4, tab));
    return (0);
}
