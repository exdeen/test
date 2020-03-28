#include <stdio.h>
#include <stdlib.h>
#include "ft_stock_par.h"




char **ft_split_whitespaces(char *str)
{
    int i = 0;
    int j = 0;
    int k = 0;
    int m = 0;
    int nboxs = nofbox(str);
    int nletters = 0;
    int counter = 0;

    char **ptr;
    ptr = malloc(sizeof(char*) * nofbox(str));
    if (ptr == NULL)
        return (NULL);
    while(str[i])
    {
        ptr[j] = malloc(sizeof(char) * letters(&str[i]));
        if (ptr[j] == NULL)
            return (NULL);
       // strput(&str[i], ptr[j]);



        while(str[i] <= 32)
           i++;
      while(!(str[i] <= 32))
      {
        ptr[j][k] = str[i];
          i++;
          k++;
      }
    ptr[j][k] = '\0';
    k = 0;

    counter++;
    if (counter ==  nboxs - 1)
        break;

        j++;
        i++;
    }
    ptr[j+1] = NULL;

    return(ptr);



}
void    strput(char *str, char *des)
{
        int i = 0;
        int j = 0;
    while(str[i] == ' ')
      i++;
    while(str[i] != ' ')
    {
        des[j] = str[i];
        i++;
        j++;
    }
    des[j] = '\0';
}
int letters(char *str)
{
    int i = 0;
    int counter = 0;

    while(str[i] <= 32)
        i++;
    while(!(str[i] <= 32))
    {
        i++;
        counter++;
    }
    return(counter + 1);
}
int nofbox(char *str)
{
    int i = 0;
    int counter = 0;
    int indicator = 0;
    int lenght = 0;

    if (!(str[i] <= 32))
    {
        while(!(str[i] <= 32))
            i++;
    }
    while(str[i])
    {
        indicator = 0;
        while (!(str[i] <= 32))
        {
            i++;
            indicator = 1;
        }
        if (indicator == 1)
            counter++;
        i++;
    }
    i = 0;
    while(str[i])
        i++;
    if (!(str[i] <= 32))
        counter--;

    return (counter+2);
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

int main()
{
        char *tab[] = {"Azden ha", "Imran ha", "Mouad ha", "Ahmed ha"};
    printf("%s", ft_param_to_tab(4, tab)[0].tab[0]);

    return (0);
}
