#include <stdio.h>
#include <stdlib.h>
#include "ft_stock_par.h"
#include <unistd.h>

void ft_putnb(int nb)
{
    int i ;
    int counter = 0;
    int d = 1;
    int nbr = nb;

    while (nb > 0)
    {
        nb = nb / 10;
        counter++;
    }
    i = counter;
    while(i - 1 > 0)
    {
        d = d * 10;
        i--;
    }

    while(counter > 0)
    {
        ftputchar(((nbr / d) % 10 ) + '0');
        d = d / 10;
        counter--;
    }

   // return (d);
}
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

       // printf("%s", par[0].copy);
       // printf("\n%d", par[0].size_param);
    //    printf("%s\n", par[0].tab[5]);


    while(par[i].size_param != 0)
    {
        while(par[i].copy[j])
        {
            ftputchar(par[i].copy[j]);
            j++;
        }
        j = 0;

        ftputchar('\n');
        ft_putnb(par[i].size_param);

        m = 0;
        while(par[i].tab[m])
        {
            ftputchar('\n');
            while(par[i].tab[m][n])
            {
                ftputchar(par[i].tab[m][n]);
                n++;
            }
            n = 0;
            m++;
        }
        ftputchar('\n');


        i++;
    }
}

int main()
{
        char *tab[] = {"Azdine Rha", "Latifa Ajhir", "Mouad L3tam"};
  //  printf("%d", ft_param_to_tab(2, tab)[2].size_param);

   ft_show_tab (ft_param_to_tab(3, tab));
    //ft_param_to_tab(4, tab);
  //  printf("%d", ft_putnb(2137));
    //ft_putnb(2415);
    return (0);
}
