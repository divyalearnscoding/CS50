#include<stdio.h>
#include<cs50.h>

float discount(float price, int percent_off);
int main(void){
    float regular=get_float("Regular price:");
    int percent_off=get_int("how much percent discount to give:");
    float sale= discount(regular,percent_off);
    printf("sale price: %.2f\n",sale);
}



float discount(float price, int percentage){
    return price*(100-percentage)/100;

}