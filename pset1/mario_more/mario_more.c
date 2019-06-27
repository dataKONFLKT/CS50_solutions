/******************************
 * Prints a pyramid similiar to those in mario game
 * This is a little bit harder exercise for getting known with nested loops, than mario_less
 ******************************/
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Declare a variable for storing pyramid height
    int height = 0;
    
    // Ask for pyramid height once and repeat until h:<1,8>
    while ( height < 1 || height > 8)
    {
        height = get_int("Height: ");
    }
    
    // Iterate for each row of pyramids
    for (int row = 0; row < height; row++)
    {
        
        //Print spaces first
        for (int n = 0; n < height - row - 1; n++)
        {
            printf(" ");
        }
        
        //Print first piramid
        for (int n = 0; n <= row; n++)
        {
            printf("#");                 
        }
        
        //Print 'the gap'
        printf("  ");
        
        //Print second piramid
        for (int n = 0; n<= row; n++)
        {
            printf("#");  
        }

        // Proceed to next row
        printf("\n");
    }
}