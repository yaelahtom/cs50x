#include <cs50.h>
#include <stdio.h>

#define PYRAMID_HEIGHT 5

int main(void)
{
 for(int currentRow = 1; currentRow <= PYRAMID_HEIGHT; currentRow++)
 {
    for(int currentColumn = PYRAMID_HEIGHT; currentColumn >= currentRow; currentColumn--)
    {
      printf(" ");
    }
    for (int currentSymbol = 1; currentSymbol <= currentRow; currentSymbol++ )
    {
      printf("#");
    }
    printf("\n");
 }
}
