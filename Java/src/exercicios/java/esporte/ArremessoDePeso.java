package exercicios.java.esporte;
import exercicios.java.atleta.Atleta;

import java.util.Arrays;


public class ArremessoDePeso extends Esporte{
    private int numeroArremessos = 3;
    private float distanciaObtidaUm[] = new float[numeroArremessos];
    private float distanciaObtidaDois[] = new float[numeroArremessos];

    public ArremessoDePeso(Atleta jogadorUm, float umaDistanciaObtidaUm[], Atleta jogadorDois,float umaDistanciaObtidaDois[]){
        super(jogadorUm, jogadorDois);

        for (int i = 0; i < numeroArremessos; i++) {
            this.distanciaObtidaUm[i] = umaDistanciaObtidaUm[i];
            this.distanciaObtidaDois[i] = umaDistanciaObtidaDois[i];
        }
        Arrays.sort(this.distanciaObtidaUm);
        Arrays.sort(this.distanciaObtidaDois);
    }

    public void defineArremeco(){
        int j = 1;

        for (int i = numeroArremessos-1; i >= 0; i--) {

            System.out.printf("Arremesso " + j + " Jogador 1: ");
            System.out.printf("%.2fm \n", distanciaObtidaUm[i]);


            System.out.printf("Arremesso " + j + " Jogador 2: " );
            System.out.printf("%.2fm \n", distanciaObtidaDois[i]);
            System.out.println("-------------------------------");

            j++;
        }


        if (this.distanciaObtidaUm[2] > this.distanciaObtidaDois[2]){
            System.out.println("o jogador " + getJogadorUm().getNome() + " venceu.");
            setVencedor(getJogadorUm());

        }

        else if (this.distanciaObtidaUm[2] < this.distanciaObtidaDois[2]){
            System.out.println("o jogador " + getJogadorDois().getNome() + " venceu.");
            setVencedor(getJogadorDois());
        }

        else {
            System.out.println("Os maiores arremessos empataram. Checando os segundos arremessos...");

            if(this.distanciaObtidaUm[1] > this.distanciaObtidaDois[1]){
                System.out.println("o jogador " + getJogadorUm().getNome() + " venceu.");
                setVencedor(getJogadorUm());
            }

            else if(this.distanciaObtidaUm[1] < this.distanciaObtidaDois[1]){
                System.out.println("o jogador " + getJogadorDois().getNome() + " venceu.");
                setVencedor(getJogadorDois());
            }

            else {
                System.out.println("Os segundos arremessos empataram. Checando os terceiros arremessos...");

                if(this.distanciaObtidaUm[0] > this.distanciaObtidaDois[0]){
                    System.out.println("o jogador " + getJogadorUm().getNome() + " venceu.");
                    setVencedor(getJogadorUm());
                }

                else if(this.distanciaObtidaUm[0] < this.distanciaObtidaDois[0]){
                    System.out.println("o jogador " + getJogadorDois().getNome() + " venceu.");
                    setVencedor(getJogadorDois());
                }

                else
                    System.out.println("O jogo empatou. Não foi possível determinar um vencedor.");
            }
        }
    }


}
