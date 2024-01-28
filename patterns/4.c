#include <stdio.h>

int main(void)
{
  int height = 5;

  for (int row = 1; row <= height; row++)
  {
    for (int col = 1; col <= row; col++)
    {
      printf("%i ", col);
    }
    printf("\n");
  }
}