#include<stdio.h>
int main (){
    struct pokemon
    {
        int hp;
        int speed;
        int attack;
        char tiar;
    };
    struct pokemon pikachu;
    pikachu.attack=60;
    pikachu.hp=45;
    pikachu.speed=90;
    pikachu.tiar='P';

    struct pokemon charizard;
    {
        charizard.attack=80;
        charizard.hp=78;
        charizard.speed=100;
        charizard.tiar='C';
    };
    
    printf("%d %d",pikachu.attack,pikachu.hp);
    return 0;
    
}