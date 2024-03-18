#include <stdio.h>
int herbs,mana,hp;
int swords[2];

int main(){
    printf("Masukan HP : ");
    scanf("%d", &hp);
    printf("Masukan Herbs : ");
    scanf("%d", &herbs);
    printf("Masukan mana : ");
    scanf("%d", &mana);
    printf("Masukan Damage Sword pertama : ");
    scanf("%d", &swords[0]);  
    printf("Masukan Damage Sword kedua : ");
    scanf("%d", &swords[1]); 
    printf("=====Preview===== \n"); 
    printf("Hp = %d \n Mana = %d \n Damage Sword 1 = %d \n Damage Sword 2 = %d", hp, mana, swords[0], swords[1]);

    HpPotion(hp,herbs);
    return 0;
}

void HpPotion(int hp, int herbs){
   printf("\n\n=====HP Potion======");
   herbs--;
   hp += 50;
   printf("\nHp = %d \n Herbs = %d", hp, herbs);
}