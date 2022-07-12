#include<stdio.h>
#include<cs50.h>
//testing clang

int main(void)
{
    string name = get_string("whats your name?");
    printf("Hello, %s\n",name);
}