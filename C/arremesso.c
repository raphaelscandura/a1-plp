#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "arremesso.h"
/**
 * criterioDeDesempate function
 *
 * Determina o atleta vencedor baseado nas duas(2) maiores distancias dos arremessos dos atletas.
 *
 * @param melhoresArremessos - Array contendo os melhores arremessos de cada atleta.
 * @param QUANTIDADE_DE_ATLETAS - Quantidade de atletas participando da competicao.
 * @param arremessoDeDesempate - Array contendo os arremessos com as segundas maiores distancias de cada atleta para o desempate.
 * @return O numero do atleta vencedor.
 */
int criterioDeDesempate(int melhoresArremessos[], int QUANTIDADE_DE_ATLETAS, int arremessoDeDesempate[]){
    int atletaVencedor, maior;
    for (int i = 0; i < QUANTIDADE_DE_ATLETAS; ++i) {
        if (i == 0) {
            atletaVencedor = i + 1;
            maior = melhoresArremessos[i];
        }else if (maior < melhoresArremessos[i]){
            atletaVencedor = i+1;
            maior = melhoresArremessos[i];
        }else {
            if (melhoresArremessos[i] == maior) {
                for (int j = 0; j < QUANTIDADE_DE_ATLETAS; ++j) {
                    if (j == 0) {
                        atletaVencedor = j + 1;
                        maior = arremessoDeDesempate[j];
                    }else if (maior < arremessoDeDesempate[j]){
                        atletaVencedor = i+1;
                        maior = melhoresArremessos[i];
                    }
                }
            }
        }
    }
    return atletaVencedor;
}

/**
 * mudar function
 *
 * Muda os valores de a e b, trocando os enderecos dos dois valores.
 *
 * @param a - Ponteiro de valor a
 * @param b - Ponteiro de valor b
 */
void mudar(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

/**
 * particao function
 *
 * Arranja um vetor de tamanho "alto" comecando pelo valor armazenado no indice "baixo", comparando os valores
 * nos extremos do vetor em pares.
 *
 * @param array - Vetor a ser arranjado.
 * @param baixo - indice mais baixo do vetor.
 * @param alto - indice mais alto/tamanho do vetor.
 * @return i+1.
 */
int particao(int array[], int baixo, int alto){
    int pivot = array[alto];
    int i = (baixo - 1);

    for (int j = baixo; j <= alto - 1; j++) {
        if (array[j] <= pivot){
            i++;
            mudar(&array[i], &array[j]);
        }
    }
    mudar(&array[i+1], &array[alto]);
    return (i + 1);
}
/**
 * Quicksort function
 *
 * Aplica o algortimo de quicksort no vetor array.
 *
 * @param array - vetor a ser ordenado
 * @param baixo - indice mais baixo do vetor.
 * @param alto - indice mais alto/tamanho do vetor.
 */
void quickSort(int array[], int baixo, int alto){
    if (baixo < alto){
        int pi = particao(array, baixo, alto);
        quickSort(array, baixo, pi - 1);
        quickSort(array, pi + 1, alto);
    }
}

/**
 * printArray function
 *
 * Exibe todos os elementos de um vetor.
 *
 * @param array - vetor a ser exibido.
 * @param tamanho - tamanho do vetor.
 */
void printArray(int array[], int tamanho){
    int i;
    for (i=0; i < tamanho; i++)
        printf("%d ", array[i]);
    printf("\n");
}

/**
 * ordenarDistancias function
 *
 * Chamada do algoritmo de ordenacao para o vetor de distancias dos arremessos.
 *
 * @param distancias - Vetor contendo as distancias dos arremessos do atleta.
 * @param QUANTIDADE_DE_ARREMESSOS - Quantidade de arremessos totais do atleta.
 */
void ordenarDistancias(int distancias[], int QUANTIDADE_DE_ARREMESSOS){
    quickSort(distancias, 0, QUANTIDADE_DE_ARREMESSOS-1);
}

/**
 * pegarMaiorDistancia
 *
 * le um vetor de distancias e pega o maior valor dentro dele.
 *
 * @param distancias - Vetor contendo as distancias dos arremessos.
 * @param QUANTIDADE_DE_ARREMESSOS - Numero de arremessos.
 * @return maior - Valor da maior distancia dentro do vetor.
 */
int pegarMaiorDistancia(int distancias[], int QUANTIDADE_DE_ARREMESSOS){
    int maior=-999;
    for (int i = 0; i < QUANTIDADE_DE_ARREMESSOS; ++i) {
        if (distancias[i] >= maior)
            maior = distancias[i];
    }
    return maior;
}

/**
 * pegarSegundaMaiorDistancia function
 *
 * Retorna a segunda maior distancia dos arremessos.
 *
 * @param distancias - Vetor contendo as distancias dos arremessos.
 * @param QUANTIDADE_DE_ARREMESSOS - Quantidade de arremessos totais do atleta.
 * @return a segunda maior distancia dos arremessos.
 */
int pegarSegundaMaiorDistancia(int distancias[], int QUANTIDADE_DE_ARREMESSOS){
    return distancias[QUANTIDADE_DE_ARREMESSOS-2];
}