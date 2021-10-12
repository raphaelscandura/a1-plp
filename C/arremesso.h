#ifndef TESTINGN1_ARREMESSO_H
#define TESTINGN1_ARREMESSO_H


void mudar(int* a, int* b);
void quickSort(int array[], int baixo, int alto);
void printArray(int array[], int tamanho);
void ordenarDistancias(int distancias[], int QUANTIDADE_DE_ARREMESSOS);

//TODO: Change int to double
int criterioDeDesempate(int melhoresArremessos[], int QUANTIDADE_DE_ATLETAS, int arremessoDeDesempate[]);
int pegarMaiorDistancia(int distancias[], int QUANTIDADE_DE_ARREMESSOS);
int particao(int array[], int baixo, int alto);
int pegarSegundaMaiorDistancia(int distancias[], int QUANTIDADE_DE_ARREMESSOS);

#endif //TESTINGN1_ARREMESSO_H