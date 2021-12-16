#include <stdio.h>

int main (void){
    int dice1, dice2, dicetax, regular;
    
    printf("Value of first dice: ");
    scanf(" %i", &dice1);

    printf("Value of second dice: ");
    scanf(" %i", &dice2);
    
    dicetax = dice1 + dice2;
    regular = dicetax * 200;
    
    if (dicetax >= 10){
        printf("\nPlease pay the Special Tax = 136 pesos\n");
    }
    else if (dicetax < 10){
        printf("\nPlease pay the Regular Tax = %i pesos\n",regular);
    }

    return 0;
}