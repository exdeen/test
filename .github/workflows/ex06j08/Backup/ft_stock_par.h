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

#endif // STOCK
