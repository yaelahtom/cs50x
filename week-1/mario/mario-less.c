#include <cs50.h>
#include <stdio.h>

int main(void)
{
  int pyramidHeight;
  do
  {
    pyramidHeight = get_int("Height: ");
  } while (pyramidHeight < 1);

  for (int currentRow = 1; currentRow <= pyramidHeight; currentRow++)
  {
    for (int currentSpace = pyramidHeight; currentSpace > currentRow; currentSpace--)
    {
      printf(" ");
    }
    for (int currentHash = 1; currentHash <= currentRow; currentHash++)
    {
      printf("#");
    }
    printf("\n");
  }
}
