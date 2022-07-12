#include<stdio.h>
#include<cs50.h>

int main(void){
    const int  MINE =2;
    int points =get_int("how many points do you loose:? ");
    if(points<MINE){
        printf("wow you did well and lost less points than me\n");

    }
    else if(points>MINE){
        printf("tough luck you lost more points than me\n");

    }
    else{
        printf("oh we got the same points\n");

    }

}