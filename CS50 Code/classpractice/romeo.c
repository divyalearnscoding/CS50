#include <stdio.h>
#include <cs50.h>



int main(void)
{
    int x;
    //creating  a loop that ask user for input till the integer is between 1 and 8
    do
    {
        x = get_int("Type in an integer:");
    }
    while (x < 1 || x > 8);

//creating loop to change line
    for (int i = 0; i < x; i++)
    {
        //creating loop to insert #
        for (int j = 0; j < x; j++)
        {
//add spaces so it looks like pyramid
            if (i + j < x - 1)
            {
                printf(" ");
            }
            else
            {
                printf("#");
            }
        }
        printf("\n");
    }
}
