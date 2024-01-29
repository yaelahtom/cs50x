#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;

    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    for (int row = 1; row <= height; row++)
    {
        // Print spaces
        for (int space = height - row; space > 0; space--)
        {
            printf(" ");
        }

        // Print left hashes
        for (int hash = 1; hash <= row; hash++)
        {
            printf("#");
        }

        // Print gap between the two pyramid halves
        printf("  ");

        // Print right hashes
        for (int secHash = 1; secHash <= row; secHash++)
        {
            printf("#");
        }

        printf("\n");
    }
}
