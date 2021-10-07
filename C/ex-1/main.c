#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define QUANTIDADE_DE_ATLETAS 2
#define QUANTIDADE_DE_JUIZES 5

//Função principal, executa os comandos de seleção de jogo (menu principal)
int main()
{
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

//Função auxiliar para animação da performance do atleta
void delay(int segundos)
{
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

//Função que calcula qual a pontuação do atleta depois dos cinco juízes darem suas notas, que são passadas por parâmetro
int calculoPontuacao(int notas[]){
    int indexMenorNota = 0;
    int somatoriaFinal = 0;
    //Pega o index da menor nota
    for (int i = 0; i < QUANTIDADE_DE_JUIZES; i++){
        if (notas[i] < notas[indexMenorNota]){
            indexMenorNota = i;
        }
    }
    //Soma o valor de todas as notas menos a menor delas, de acordo com o index salvo no FOR anterior
    for(int j = 0; j < QUANTIDADE_DE_JUIZES; j++){
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

//Função que executa o jogo de ginastica artítica
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
        pontuacao[i-1] = calculoPontuacao(notas);
    }
    //Decide quem é o vencedor e imprime no console, fim do jogo
    imprimeVencedor(pontuacao);

}


void jogarArremessoDePeso(){

}
