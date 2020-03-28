#include <stdio.h>
#include <stdlib.h>







int ischarset(char c, char *charset)
{

    int i = 0;
    int indicator;
    while (charset[i])
    {
        if (charset[i] == c)
        {
            indicator = 1;
            break;
        }
        else
            indicator = 0;
        i++;
    }
    return (indicator);
}




char **ft_split(char *str, char *charset)
{
    int i = 0;
    int j = 0;
    int k = 0;
    int m = 0;
    int counter = 0;
    int n = 0;
    char **ptr;
    ptr = malloc(sizeof(char*) * nboxs(str, charset));
    if(ptr == NULL)
        return (NULL);



    while(str[i])
    {
        while((ischarset(str[i], charset)) == 1)
            i++;
        m = i;
        while((ischarset(str[i], charset)) == 0)
        {
            counter++;
            i++;
        }
        ptr[j] = malloc(sizeof(char) * (counter+1));
        i = m;
        while((ischarset(str[i], charset)) == 0)
        {
            ptr[j][k] = str[i];
            k++;
            i++;
        }

        if (n != (nboxs(str, charset ) -1 ))
        {
            ptr[j][k] = '\0';
            k = 0;
            j++;
            i++;
        }
        else
        {
            ptr[j] = NULL;
            break;

        }
        n++;



    }
    return (ptr);



}
int nboxs(char *str, char *charset)
{
    int counter = 0;
    int i = 0;
    int j = 0;

     while(ischarset(str[i], charset) == 1)
            i++;
    while(str[i])
    {

        if (ischarset(str[i], charset) == 0)
        {
            counter++;
            while (ischarset(str[i], charset) == 0)
                i++;

        }
        i++;
    }
    return (counter+1);

}
int main()
{
     int i = 0;
    char str[] = "..,.,ana,..,.,azdim.,.,.";
   char charset[] = ",.";
  //  printf("%d", ischarset(str[6], charset));
 //  printf("%d", nboxs (str, charset));
  printf("%s", ft_split(str, charset)[0]);
    return (0);
}
