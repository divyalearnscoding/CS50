#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int x, i, j, k, m;
    do
    {
        x = get_int("Type the height you want:");
    }
    while (x < 1 || x > 8);
    //first loop is to change line
    for (i = 0; i < x ; i++)
    {
        //this loop is to print blank spaces as we need right aligned prymid
        //logic here is the number of spaces required is eaqual to the height of prymid minus the row number misus 1
        for (k = 0; k < x - i - 1; k++)
        {
            printf(" ");
        }
        //this will print necessary # for the prymid
        //the logic here is we need as many # as the number of row in which they are at
        //so if the # are on 1st row we need to print 1 # and so on and so forth
        for (j = 0; j <= i; j++)
        {
            printf("#");
        }
        //to print the given prymid there is always constant 2 spaces between prymids
        printf("  ");
        //and now printing second prymid we need it left aligned so no spaces required
        for (m = 0; m <= i; m++)
        {
            printf("#");
        }
        printf("\n");
    }
}