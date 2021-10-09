package exercicios.java.esporte;

import exercicios.java.atleta.Atleta;

import java.util.Arrays;

public class GinasticaArtistica extends Esporte{
    private int notasRecebidas = 5;
    private float notaJogadorUm[] = new float[notasRecebidas];
    private float somaNotasJogadorUm;
    private float somaNotasJogadorDois;
    private float notaJogadorDois[] = new float[notasRecebidas];

    public GinasticaArtistica(Atleta jogadorUm, float notasPrimeiroJogador[], Atleta jogadorDois, float notasSegundoJogador[]){
        super(jogadorUm, jogadorDois);

        for (int i = 0; i < notasRecebidas; i++) {
            this.notaJogadorUm[i] = notasPrimeiroJogador[i];
            this.notaJogadorDois[i] = notasSegundoJogador[i];
        }
        Arrays.sort(this.notaJogadorUm);
        Arrays.sort(this.notaJogadorDois);
    }

    public void defineResultados(){

        int j = 1;
        float soma = 0;

        for(int i = 0; i < 5; i++){
            System.out.printf("Nota nº " + j + " Jogador 1: ");
            System.out.printf("%.2f \n", notaJogadorUm[i]);

            if(i > 0)
                soma = soma + notaJogadorUm[i];


            j++;
        }
        System.out.printf("Soma das notas Jogador 1: ");
        System.out.printf("%.2f \n", soma);
        System.out.println("-------------------------------");

        somaNotasJogadorUm = soma;
        j = 1;
        soma = 0;

        for(int i = 0; i < 5; i++){
            System.out.printf("Nota nº " + j + " Jogador 2: ");
            System.out.printf("%.2f \n", notaJogadorDois[i]);

            if(i > 0)
                soma = soma + notaJogadorDois[i];

            j++;
        }

        System.out.printf("Soma das notas Jogador 2: ");
        System.out.printf("%.2f \n", soma);
        somaNotasJogadorDois = soma;

        if (this.somaNotasJogadorUm > this.somaNotasJogadorDois){
            System.out.println("\n\nO jogador " + getJogadorUm().getNome() + " venceu.");
            setVencedor(getJogadorUm());
        }

        else if (this.somaNotasJogadorUm < this.somaNotasJogadorDois){
            System.out.println("o jogador " + getJogadorDois().getNome() + " venceu.");
            setVencedor(getJogadorDois());
        }

        else
            System.out.println("Houve um empate.");
    }


    public void setSomaNotasJogadorUm(float somaNotasJogadorUm){
        this.somaNotasJogadorUm = somaNotasJogadorUm;
    }

    public float getSomaNotasJogadorUm(){
        return this.somaNotasJogadorUm;
    }

    public void setSomaNotasJogadorDois(float somaNotasJogadorDois){
        this.somaNotasJogadorDois = somaNotasJogadorDois;

    }

    public float getSomaNotasJogadorDois(){
        return this.somaNotasJogadorDois;
    }
}
