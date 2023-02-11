#include <stdio.h>

int change(float amount)
{
  int tempAmount = (int)(amount * 100);
  int denomArray[] = {25, 10, 5, 1};
  int changeVal = 0;
  for(int j = 0; j < 4; j++)
  {
    // printf("tempAmount is %d, changeVal is %d\n", tempAmount, changeVal);
    if(tempAmount >= denomArray[j]){
      changeVal += tempAmount / denomArray[j];
      tempAmount %= denomArray[j];
    }
    
  }
  return changeVal;
}

int main()
{
  float amountArray[] = {0.49, 1.27, 0.75, 1.31, 0.83};
  for(int i = 0; i < 5; i++)
  {
    printf("%d\n", change(amountArray[i]));
  }
  // int res = change(1.31);
  // printf("%d\n",res);
  return 0;

}