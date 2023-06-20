#include<stdio.h>
#include<stdlib.h>
#include<time.h>

    // returns 1 if you win, -1 if you lose and 0 if draw

    // condition for draw
    // cases
    // ss 
    // gg 
    // ww 
int snakeWaterGun(char you, char comp){
    if (you == comp){
        return 0;
    }
    // condition for non-draw
    // cases
    // sg
    // sw
    // ws 
    // gs
    // gw
    if(you=='s' && comp=='g'){
        return -1;
    }
    else if (you=='g' && comp=='s'){
        return 1;
    }
    if(you=='s' && comp=='w'){
        return 1;
    }
    else if (you=='w' && comp=='s'){
        return -1;
    }
    if(you=='g' && comp=='w'){
        return -1; 
    }
    else if (you=='w' && comp=='g'){
        return 1;
    }

}

int main(){
    char you, comp;
    srand(time(0));
    int number = rand()%100 + 1;

    if(number<33){
        comp = 's';
    }
    else if (number>33 && number<66){
        comp = 'w';
    }
    else{
        comp = 'g';
    }
    comp = 's';
    printf("Enter 's' for snake, 'w' for water and 'g' for gun\n");
    scanf("%c", &you);
    int result = snakeWaterGun(you, comp);
    printf("You Chose %c and computer chose %c. ", you, comp);
    if (result==0){
       printf("Game draw\n");
    }
    else if(result==1){
        printf("You Win!\n");
    }
    else{
        printf("You Lose!\n");
    }

    return 0;
}