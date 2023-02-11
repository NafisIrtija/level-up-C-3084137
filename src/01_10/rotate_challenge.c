#include <stdio.h>

void rotate(int *array, int *array2, int rowNumber, int columnNumber);
void display(int *array, int rowNumber, int columnNumber);

int main()
{
  int rowNumber = 5;
  int columnNumber = 3;
  int array[5][3] = {
                    {1, 2, 4},
                    {3, 5, 6},
                    {3, 2, 2},
                    {4, 1, 9},
                    {5, 4, 3}
                    };
  int rotatedArray[3][5];
  display(array,rowNumber, columnNumber);
  rotate(array, rotatedArray, rowNumber, columnNumber);
  printf("\n");
  display(rotatedArray, columnNumber, rowNumber);

  return 0;
}

void rotate(int *array, int *array2, int rowNumber, int columnNumber)
{
  for(int r = 0; r < rowNumber; r++){
    for(int c = 0; c < columnNumber; c++)
    {
      *(array2 + c * rowNumber + r) = *(array + r * columnNumber + c);
    }
  }
}

void display(int *array, int rowNumber, int columnNumber)
{
  for (int r = 0; r < rowNumber; r++)
  {
    for (int c = 0; c < columnNumber; c++)
    {
      printf("%d\t",*(array + r * columnNumber + c));
    }
    printf("\n");
  }
}