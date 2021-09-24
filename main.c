#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define QUANTIDADE_DE_ATLETAS 2
#define QUANTIDADE_DE_JUIZES 5

int main()
{
    printf("************************\n");
    printf("**JOGOS OLIMPICOS EM C**\n");
    printf("************************\n");
    printf("Qual jogo voce gostaria de jogar?\n1 - Ginastica Artistica\n2 - Arremesso de Peso\n");

    int entradaDoUsuario;
    scanf("%d", &entradaDoUsuario);
    switch(entradaDoUsuario){
    case 1:
        jogarGinasticaArtistica();
        break;
    case 2:
        jogarArremessoDePeso();
        break;
    default:
        printf("Valor invalido, selecione jogo 1 ou jogo 2\n");
        break;
    }
}

void delay(int segundos)
{
    int milisegundos = 1000 * segundos;

    clock_t start_time = clock();

    while (clock() < start_time + milisegundos);
}

void atletaDancando(int atleta){
    printf("Perfomance do atleta numero %d\n", atleta);
    printf("(*-*)\n");
    printf(" \\|/ \n");
    printf("  |  \n");
    printf(" /\\  \n\n");
    delay(2);
    printf("  \\/ \n");
    printf("  |  \n");
    printf(" /|\\ \n");
    printf("(.-.)\n\n");
    delay(1);
    printf("(*-*)\n");
    printf(" \\|/ \n");
    printf("  |  \n");
    printf(" /\\  \n\n");
    delay(2);
}

int calculoPontuacao(int notas[]){
    int index = 0;
    int somatoriaFinal = 0;
    for (int i = 0; i < QUANTIDADE_DE_JUIZES; i++){
        if (notas[i] < notas[index]){
            index = i;
        }
    }
    for(int j = 0; j < QUANTIDADE_DE_JUIZES; j++){
        if(j != index){
            somatoriaFinal += notas[j];
        }
    }

    return somatoriaFinal;
}

void imprimeVencedor(int pontuacao[]){
    printf("Atleta 1: %d pontos\n", pontuacao[0]);
    printf("Atleta 2: %d pontos\n", pontuacao[1]);
    if(pontuacao[0] > pontuacao[1]){
        printf("O Atleta 1 venceu!");
    } else {
        printf("O Atleta 2 venceu!");
    }
}

void jogarGinasticaArtistica(){
    int pontuacao[QUANTIDADE_DE_ATLETAS];

    for(int i = 1; i <= QUANTIDADE_DE_ATLETAS ; i++){
        int notas[QUANTIDADE_DE_JUIZES];

        atletaDancando(i);

        for(int i = 1; i <= QUANTIDADE_DE_JUIZES; i++){
            printf("Juiz numero %d de a sua nota\n", i);
            scanf("%d", &notas[i-1]);
        }
        pontuacao[i-1] = calculoPontuacao(notas);
    }
    imprimeVencedor(pontuacao);

}


void jogarArremessoDePeso(){

}
