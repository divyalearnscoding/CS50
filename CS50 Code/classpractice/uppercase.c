#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string s = get_string("before: ");
    printf("after: ");
    for(int i=0, n = strlen(s); i < n; i++)
    {
        //if (s[i] >= 'a' && s[i] <= 'z')
        //if (islower(s[i]))
        //{
            //printf("%c", s[i]-32);
            printf("%c", toupper(s[i]));
        //}
        //else
        //{
            //printf("%c",s[i]);
        //}

    }
    printf("\n");
}