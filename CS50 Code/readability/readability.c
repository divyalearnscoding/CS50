#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

//calculates letters, words and sentences.
int get_grade(string s);


int main(void)
{
    //usser input
    string text = get_string("Write your sentence: ");
    //gets grade from get_grade function and stores in grade
    int grade = get_grade(text);
    //Determines what to print according to grade
    if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else if (grade < 1)
    {
        printf("Before Grade 1\n");

    }
    else
    {
        printf("Grade %i\n", grade);
    }
    //not required but  i    guess a good practice maybe
    return 0;
}

//making of the function
int get_grade(string s)
{
    int length = 0, word = 0, sentence = 0;
//using strlen to run loop to find l, w, s
    for (int i = 0; i < strlen(s); i++)
    {
        int chr = s[i];

        if (isalnum(chr))
        {

            length++;
        }
        if (isspace(chr))
        {
            word++;
        }
        if (chr == '.' || chr == '!' || chr == '?')
        {
            sentence++;
        }


    }
    // always gives -1 words so temperory solution
    word++;
    float l = (length * 100.0f) / word;
    float j = (sentence * 100.0f) / word;
    return round(0.0588 * l - 0.296 * j - 15.8);
}


