#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "ginastica.h"

//Função auxiliar para animação da performance do atleta
void delay(int segundos){
    int milisegundos = 1000 * segundos;

    clock_t start_time = clock();

    while (clock() < start_time + milisegundos);
}

//Função que imprime a performance do atleta
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

//Função que calcula qual a pontuação do atleta depois dos cinco ju�zes darem suas notas, que são passadas por parâmetro
int calculoPontuacao(int notas[], int quantidadeDeJuizes){
    int indexMenorNota = 0;
    int somatoriaFinal = 0;
    //Pega o index da menor nota
    for (int i = 0; i < quantidadeDeJuizes; i++){
        if (notas[i] < notas[indexMenorNota]){
            indexMenorNota = i;
        }
    }
    //Soma o valor de todas as notas menos a menor delas, de acordo com o index salvo no FOR anterior
    for(int j = 0; j < quantidadeDeJuizes; j++){
        if(j != indexMenorNota){
            somatoriaFinal += notas[j];
        }
    }

    return somatoriaFinal;
}

//Imprime o vencedor de acordo com a pontuação de cada um, que por sua vez é recebia por parâmetro em forma de array
void imprimeVencedor(int pontuacao[]){
    printf("Atleta 1: %d pontos\n", pontuacao[0]);
    printf("Atleta 2: %d pontos\n", pontuacao[1]);
    if(pontuacao[0] > pontuacao[1]){
        printf("O Atleta 1 venceu!");
    } else if (pontuacao[0] < pontuacao[1]){
        printf("O Atleta 2 venceu!");
    }else {
        printf("O jogo empatou!");
    }
}
