

int main()
{
    char *str1 = "teest"; // array of char
    char *str2 = "world"; // array of char

    char **tab2; // = {str1, str2}; // array of *ptr

    tab2 = malloc(sizeof(char*)*2);
    tab2[0] = str1;
    tab2[1] = str2;

    char ***tab3; // = {tab2}; // array of **ptr

    tab3 = &tab2;


  char **ptr1;
  char ***ptr2;
  char ****ptr3;





  char *cp;
  char **p;
  char ****pt;

  char c = 'C' ;
  cp = &c;


  ptr1 = &str1;
  ptr2 = &tab2;
  ptr3 = &tab3;

  pt = &ptr3;
  p = &str1;




  //  printf("Value of var using single pointer = %d\n", *ptr1 );
    //printf("Value of var using double pointer = %d\n", **ptr2);
    //printf("Value of var using triple  pointer = %d\n", ***ptr3);

   // printf("%c\n", ***ptr3);
    //printf("%s\n", **ptr3);

  //  printf("\n\n%s\n", ptr2);


  //  printf("\n\n%s\n", ptr1);
   // printf("\n\n%c\n", *ptr1);


//when you declare a pointer name you should use this name only with it don't decelare another pointer with diffrenr latyers with the same name
   //beacause the sarts are used just to get into first item of layers

   // when you make pointer  equal to another pointer (ptr = str) is means it's equal to what that pointer point to
   //and that pointer must have the same number of layers and it's just like a = b;


   // to make pointer to point to another pointer it must be one layer higher . stars means the first value of what that pointer point to or [0] or you can do that
   // char * ptr ;  ptr = &tab;
   //when you call *ptr it means *(&tab) .. move the starts to what the pointer points to and it means ptr[0] or tab[0]


    printf("\n\n%s\n", *p);
  //  printf("\n\n%s\n", tab3[0][0]);

    //  printf("\n\n%s\n", str1);

    // str1 doesm't have any start bcs we don't want the first item of what it points to we want the whole thing that why we want the 1st adresss of what it points to so it gaves you according to above ptr1 = &str1 .. (&str1) ... that exactly what we need
    //*p it doesh have a star because we want the first item of what it points to not the adress of it
    // so it point to (&ptr1) that's an adress of a pointer not the adress of our string .. we don't want that so we
    //so it gives us (&ptr1) and it's not helpful because we wants what that pointer points to not the pointer itself
    //so we will add the start *(&ptr1) so it gives us what that pointer stores and its the adress of our array (&str1) that what we need




    //str  : "Access" of  all elements it's stores (adress of the first element)
    //*str : the "Value" of the first element it stores
    // &str : the "adress" of the pointer

   //  printf("\n\n%s\n", ***pt);


   // printf("\n\n%c\n", *cp);










    //end


    // printf("%c\n", cp);




    return (0);
}
