#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MOVESIZE 9
#define DIRECTION 2

typedef struct position
{
  int x_pos;
  int y_pos;
} position;

void output(int t, position k)
{
  int row, col;

  /* grid header */
  if (t == 0)
    puts("Start:");
  else
    printf("Turn %d:\n", t);

  /* grid */
  for (row = 1; row < MOVESIZE; row++)
  {
    for (col = 1; col < MOVESIZE; col++)
    {
      if (row == k.y_pos && col == k.x_pos)
        printf(" K ");
      else
        printf(" . ");
    }
    putchar('\n');
  }
}

int main()
{
  int r, count = 0;
  position movesList[MOVESIZE] = {{0, 0},
                                  {0, 1},
                                  {0, -1},
                                  {1, 0},
                                  {-1, 0},
                                  {1, 1},
                                  {1, -1},
                                  {-1, 1},
                                  {-1, -1}};
  position init_position = {5,4};
  srand((unsigned)time(NULL));
  // printf("The king started from (%d, %d)\n", init_position.x_pos, init_position.y_pos);

  while((init_position.x_pos <= 8 && init_position.x_pos >= 1) &&
  (init_position.y_pos <= 8 && init_position.y_pos >= 1))
  {
    output(count, init_position);
    printf("The king is at (%d, %d)\n", init_position.x_pos, init_position.y_pos);
    r = rand() % MOVESIZE;
    init_position.x_pos += movesList[r].x_pos;
    init_position.y_pos += movesList[r].y_pos;
    
    count++;
  }
  printf("The count is: %d\n",count);
}