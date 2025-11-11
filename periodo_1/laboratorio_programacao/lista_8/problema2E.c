#include <stdio.h>
#include <math.h>

struct personagem{
      int ataque;
      int defesa;
      int hp;
};

struct jogo{
    struct personagem heroi;
    struct personagem inimigo;
};

int calculaDano(int p1Ataque, int p2Defesa){
    return abs(p1Ataque - p2Defesa);
}
int simulaCombate(struct jogo j){
    while(j.heroi.hp > 0 || j.inimigo.hp > 0){
        j.inimigo.hp -= calculaDano(j.heroi.ataque, j.inimigo.defesa);    
        if (j.inimigo.hp <= 0){
            return 1;
        }

        j.heroi.hp -= calculaDano(j.inimigo.ataque, j.heroi.defesa); 
        if (j.heroi.hp <= 0){
            return 0;
        }  

    }
}
int main(){
    struct jogo j;
    // ataque, defesa, hp do heroi
    scanf("%d %d %d", &j.heroi.ataque, &j.heroi.defesa, &j.heroi.hp); 
    // ataque, defesa, hp do inimigo
    scanf("%d %d %d", &j.inimigo.ataque, &j.inimigo.defesa, &j.inimigo.hp); 
    
    if(simulaCombate(j)){
        printf("Heroi ganhou\n");
    } else {
        printf("Inimigo ganhou\n");
    }
    return 0;
}