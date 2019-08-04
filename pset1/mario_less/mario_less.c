/******************************
 * 
 *  mario_less.c
 *  
 *  DataKonflkt
 *  Harvard Computer Science 50
 *  Week one Problem Set
 *
 *  Prints a pyramid similiar to those in mario game
 *  This is an easy exercise for getting known with nested loops
 *
 ******************************/

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Declare a variable for storing pyramid height
    int height;

    // Ask for pyramid height once and repeat until h:<1,8>
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    // Iterate for each row of pyramid, where row = number of current row
    for (int row = 0; row < height; row++)
    {
        //Print 'spaces'
        for (int n = 0; n <= height - row - 2; n++)
        {
            printf(" ");
        }

        //Print 'hashes'
        for (int n = 0; n <= row; n++)
        {
            printf("#");
        }

        //New row
        printf("\n");
    }
}