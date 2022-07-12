#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //to ask user for name
    string name = get_string("What's your name? ");
    // printing hello to user

    printf("hello, %s\n", name);
}