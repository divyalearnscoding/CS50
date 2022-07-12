#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //asking user for x
    //remember int store only finite number of bits
    //int x=get_int("x: ");
    long x=get_long("x: ");
    // asking user for y
    //int y=get_int("y: ");
    long y =get_long("y:");
    //defining
    //int z=x+y;
    long z=x+y;
    //printing x+y stored in z
    //printf("%i\n", z);
    printf("%li\n", z);

    //if you are not really using z remove above two lines and remove next lines/s comment
    //printf("i%\n",x+y);
}