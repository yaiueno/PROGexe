#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));
    int number1 =rand() % 21;// number1 = 0~20
    int number2 =rand() % (21-number1) ;// number2 = 0~(20-number1) 
    int number3 =20 - number1 -number2;
    if (number1>number2 && number1>number3){
        printf("YOUR CHAR'S JOB IS MAGE\n");
    }
    else if (number2>number3 && number2>number1){
        printf("YOUR CHAR'S JOB IS KIGHT\n");
    }
    else if (number3>number2 && number3>number1){
        printf("YOUR CHAR'S JOB IS THIEF\n");
    }
    else{
        printf("YOUR CHAR'S JOB IS KIYOUBINBOU \n ");
    }
    printf("STUATUS\n INTELLIGENCE:%d \n STAMINA:%d \n CHARISMA:%d \n SUM:%d", number1, number2, number3, number1 + number2 + number3);
    return(0);
}