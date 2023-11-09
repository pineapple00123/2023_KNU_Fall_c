#include <stdio.h>

int main(void)
{
   int arry[5][5];
   int number = 1;

   for (int i = 0; i < 5; i++)
   {
      for (int e = 0; e < 5; e++)
      {
         arry[i][e] = number;
         number++;
      }
   }
   for (int i = 0; i < 5; i++)
   {
      for (int e = 0; e < 5; e++)
      {
         printf("%d ", arry[i][e]);
      }
      printf("\n");
   }
   printf("change row & column\n");
   for (int i = 0; i < 5; i++)
   {
      for (int e = 0; e < 5; e++)
      {
         printf("%d ", arry[e][i]);
      }
      printf("\n");
   }
}