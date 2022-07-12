#include<stdio.h>
#include<cs50.h>

int main(void){
    int n=get_int("Type in an integer: ");
    //using modulo function also called reminder
    if(n % 2==1){
        printf("%i is odd\n",n);
    }
    else{
        printf("%i is even\n",n );
    }
}