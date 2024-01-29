//    #  #
//   ##  ##
//  ###  ###
// ####  ####

#include <stdio.h>

int main(void)
{
  int height = 4;

  for (int row = 1; row <= height; row++)
  {
    for (int space = height; space >= row - 1; space--)
    {
      printf(" ");
    }
    for (int hash = 1; hash <= row; hash++)
    {
      printf("#");
    }
    printf("  ");
    
    for (int secHash = 1; secHash <= row; secHash++)
    {
      printf("#");
    }

    printf("\n");
  }
}