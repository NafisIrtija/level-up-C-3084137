#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void shuffle(char arr[27])
{
  // size_t len = sizeof(arr)/sizeof(arr[0]) - 1;
  char* arr2 = (char*)malloc(27 * sizeof(char));
  for(int i = 0; i < 13; i++)
  {
    arr2[2 * i] = arr[i];
    arr2[2 * i + 1] = arr[13 + i];
  }
  strcpy(arr, arr2);
}

int main()
{
  char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
  char alphabet2[27];
  strcpy(alphabet2, alphabet);
  int count = 0;
  do
  {
    shuffle(alphabet2);
    printf("%s\n",alphabet2);
    count++;
  } while (strcmp(alphabet, alphabet2));

  printf("%d\n",count);  

  return 0;
}