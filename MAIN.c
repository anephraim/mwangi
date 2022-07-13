/*
PROJECT: Zetech c snack bar
AUTHOR: ANN MWANGI DIT-01-0234/2022
COMPILER: C89
LICENCE: MIT
DATE:    13TH JULY 2022
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
   int item;
   printf("\tToday`s menu\n");
   printf("1. Smokie - ksh. 40\n");
   printf("2. milkshake - ksh 150\n");
   printf("3. hamburger - ksh 300\n");
   printf("4. samosa - ksh 50\n");
   printf("5. African tea - ksh 60\n");
   printf("Enter item no: ");
   scanf("%d", &item);
   if(item > 0 && item <= 3) (
      printf("item added o cart\n");
   }
   else {
        printf("invalid item\n");
        menu ();
   }
   return item;
