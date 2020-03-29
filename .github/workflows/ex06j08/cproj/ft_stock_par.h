#ifndef STOCK

#define STOCK
//char			**ft_split_whitespaces(char *str);
//void			ft_show_tab(struct s_stock_par *par);
typedef struct strc
{
    int size_param;
    char *str;
    char *copy;
    char **tab;

}   strc;


// white spaces split  function
/*
#include <stdio.h>
#include <stdlib.h>

int nowords(char *str)
{
    int counter = 0, i =0;
    while(str[i])
    {
        if (str[i] <= 32)
            counter++;
        i++;
    }
    return (counter+1);
}
int letters(char *str)
{
    int i = 0;
    int counter = 0;
    while(!(str[i] <= 32))
    {
        counter++;
        i++;
    }
    return(counter+1);
}
char *strcpyy(char *ptr, char *str)
{
    int i = 0;
    int k = 0;

    while(!(str[i] <= 32))
    {
        ptr[k] = str[i];
        k++;
        i++;
    }
    ptr[k] = '\0';
    return(ptr);
}
char **ft_split_whitespaces(char *str)
{
    char **ptr;
    ptr = malloc(sizeof(char*) * nowords(str) + 1);

    if (ptr == NULL)
        return (0);
    int i=0, j=0, k=0;

     while(i != nowords(str))
    {
        ptr[i] = malloc(sizeof(char) * letters(&str[k]));
        ptr[i] = strcpyy(ptr[i], &str[k]);

        while(!(str[k] <= 32))
          k++;

        i++;
        k++;


    }
    ptr[i+1] = NULL;

    return(ptr);
}*/




#include <stdio.h>
#include <stdlib.h>

int nowords(char *str)
{
    int counter = 0, i =0;
    while(str[i])
    {
        if (str[i] <= 32)
            counter++;
        i++;
    }
    return (counter+1);
}
int letters(char *str)
{
    int i = 0;
    int counter = 0;
    while(!(str[i] <= 32))
    {
        counter++;
        i++;
    }
    return(counter+1);
}
char *strcpyy(char *ptr, char *str)
{
    int i = 0;
    int k = 0;

    while(!(str[i] <= 32))
    {
        ptr[k] = str[i];
        k++;
        i++;
    }
    ptr[k] = '\0';
    return(ptr);
}
char **ft_split_whitespaces(char *str)
{
    char **ptr;
    ptr = malloc(sizeof(char*) * nowords(str) + 1);

    if (ptr == NULL)
        return (0);
    int i=0, j=0, k=0;

     while(i != nowords(str))
    {
        ptr[i] = malloc(sizeof(char) * letters(&str[k]));
        ptr[i] = strcpyy(ptr[i], &str[k]);

        while(!(str[k] <= 32))
          k++;

        i++;
        k++;


    }
    ptr[i+1] = NULL;

    return(ptr);
}






#endif // STOCK
