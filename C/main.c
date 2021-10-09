#include <stdio.h>
#include <stdlib.h>
#include "ginastica.h"

#define QUANTIDADE_DE_ATLETAS 2
#define QUANTIDADE_DE_JUIZES 5

//Função que executa o jogo de ginastica artística
void jogarGinasticaArtistica(){
    //Array que guarda a pontuação dos atletas, de tamanho igual a quantidade de atletas, onde o primeiro atleta ocupa o index 0, e assim em diante
    int pontuacao[QUANTIDADE_DE_ATLETAS];

    //Laço para cada atleta executar sua performance receber as notas dos juizes
    for(int i = 1; i <= QUANTIDADE_DE_ATLETAS ; i++){
        int notas[QUANTIDADE_DE_JUIZES];

        atletaDancando(i);

        //Laço para receber e guardar as notas dos juízes
        for(int i = 1; i <= QUANTIDADE_DE_JUIZES; i++){
            printf("Juiz numero %d de a sua nota\n", i);
            scanf("%d", &notas[i-1]);
        }
        //Calculando e guardando a pontuação do atleta em questão
        pontuacao[i-1] = calculoPontuacao(notas, QUANTIDADE_DE_JUIZES);
    }
    //Decide quem é o vencedor e imprime no console, fim do jogo
    imprimeVencedor(pontuacao);
    system("pause");
}


void jogarArremessoDePeso(){

}

//Função principal, executa os comandos de seleção de jogo (menu principal)
int main(){
    //Imprime uma mensagem inicial pro usuario
    printf("************************\n");
    printf("**JOGOS OLIMPICOS EM C**\n");
    printf("************************\n");
    printf("Qual jogo voce gostaria de jogar?\n1 - Ginastica Artistica\n2 - Arremesso de Peso\n");

    //Recebe a escolha do usuário, e chama a função que inicia o jogo correspondente
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
