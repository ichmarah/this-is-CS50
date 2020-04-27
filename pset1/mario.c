/*
Recreating the pyramid at the end of
World 1-1 in Nintendo's Super Mario Brothers.
The pyramid is rigth-aligned with blocks:
       #
      ##
     ###
    ####
   #####
  ######
 #######
########
*/

#include <stdio.h>
#include <cs50.h>

int get_positive_height(void);

int main(void)
{

    int height = get_positive_height();

    for (int i = 1; i <= height; i++)
    {
        int counter = i;
        // Print spaces
        for(int h = 0; h < (height - counter); h++)
        {
            printf(" ");
        }
        for(int j = 0; j < counter; j++)
        {
            printf("#");
        }
        printf("\n");
    }

}

//Get positive height from input
int get_positive_height(void)
{
    int input_value;
    do
    {
        // Ask user to provide block levels for pyramid
        input_value = get_int("How many levels of blocks would you like the pyramid to be? \n");
    }
    // If user provide a value less then one, the user is asked again to provide a valid value
    while ( input_value < 1 || input_value > 8);
    return input_value;
}

