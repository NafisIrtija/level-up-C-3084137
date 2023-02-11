#include <stdio.h>

int main()
{
  printf("Please enter the input value: \n");
  int inputVal;
  scanf("%d",&inputVal);
  getchar();

  if(inputVal < 1) return 0;

  int sequence = 1;
  printf("The hailstrom sequence is: ");
  while(inputVal != 1)
  {
    printf("%d, ",inputVal);
    if(inputVal %2 == 0){
      inputVal /= 2;
      sequence++;
    }
    else
    {
      inputVal = inputVal * 3 + 1;
      sequence++;
    }
  }
  printf("%d\n", inputVal);
  printf("%d\n",sequence);
}