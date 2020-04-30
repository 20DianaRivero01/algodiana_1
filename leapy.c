include <stdio.h>

int main ()
{
  int year;
  year = 1499;

      printf("%i\n", year);

    while (year <= 2100)
    {
        year = year + 1;

    if (year%400 == 0)

      printf("%i Is a Leap Year. \n ", year);

    else if (year%100 == 0)

      printf("%i Isn't a Leap Year. \n ", year);

    else if (year%4 == 0)

      printf("%i Is a Leap Year. \n ", year);

    else

      printf("%i Isn't a Leap Year. \n ", year);
    }

  return 0;
}
