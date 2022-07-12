#include <stdio.h>
#include <cs50.h>
//practicing arrays
int main (void)
{
    int n = get_int("How many scores you want?");
    int scores[n];
     for (int i = 0; i< n; i++)
     {
         scores[i] = get_int("Score:");
     }
    printf("Average: %f\n",(scores[0] + scores[1] + scores[2]) /n);
}