#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main(int argc, char**argv)
{
   int num1=atoi(argv[1]);
   int num2=atoi(argv[2]);
   int num3=atoi(argv[3]);
   int lowest, middle, highest;

   if (num1 > num2)
   {
      middle = num1;
      lowest = num2;
   } else
   {
      middle = num2;
      lowest = num1;
   }

   if (middle > num3)
   {
      highest = middle;

      if (lowest > num3)
      {
         middle = lowest;
         lowest = num3;
      }else
      {
         middle = num3;
      }
   }else
   {
      highest = num3;
   }

   printf("The lowest number is: %d\n", lowest);
   printf("The middle number is: %d\n", middle);
   printf("The highest number is: %d\n", highest);

   return(0);
}

