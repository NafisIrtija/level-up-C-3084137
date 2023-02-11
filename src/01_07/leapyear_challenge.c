#include <stdio.h>

int leapyear(int year) {
  if(year % 4 == 0) {
    if(year % 100 == 0) {
      if(year % 400 == 0) {
        return 1;
      }
      else return 0;
    }
    else return 1;
  }
  else return 0;
} 

int main()
{
  // printf("Please enter the year: \n");
  // int year;
  // scanf("%d",&year);
  // getchar();
  for(int year = 1583; year < 2102; year++)
  {
    if(leapyear(year))
    {
      printf("%d\n", year);
    }
  }

  return 0;
}