#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long long card_number = get_long_long("Key in your Credit card number?");
    int number_digits = get_number_digits(card_number);
    bool card_validity = is_card_validity(card_number);
    if (card_validity)
    {
        printCardCompany(card_number, number_digits);
    }
    else
    {
        printf("%s","INVALID\n");
    }
}

int get_number_digits(long long card_number)
{
    int digit_count = 0;
    while(card_number != 0)
    {
        card_number /= 10;
        digit_count ++;
    }
}

bool is_card_valid(long long card_number)
{
    int sum_digits = sum_every_other_digit(card_number);

    int sum_remaining = sum_remaining_digits(card_number);

    int sum_total = sum_digits + sum_remaining;

    return((sum_total % 10) == 0);
}

int sum_every_other_digit(long long card_number)
{

}
