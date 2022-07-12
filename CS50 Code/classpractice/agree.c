#include<stdio.h>
#include<cs50.h>

int main(void){
//promt user to agree/disagree
char x =get_char("Do you agree?");
if(x== 'y'|| x=='Y'){
    printf("Thanks for agreeing to conditions\n");
}
else if(x=='n'||x=='N'){
    printf("You decided against agreeing\n");

}
else{
    printf("please rerun the programm only n,N,Y,y as valid answers\n");
}
}