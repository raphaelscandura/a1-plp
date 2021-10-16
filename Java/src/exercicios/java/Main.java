package exercicios.java;

import exercicios.java.atleta.Atleta;
import exercicios.java.esporte.ArremessoDePeso;
import exercicios.java.esporte.GinasticaArtistica;
import java.util.*;

public class Main {

    public static void main(String[] args) {
        Atleta jogadorUm = new Atleta(19,"br","João");
        Atleta jogadorDois = new Atleta(19,"br","Murillo");
        Scanner sc = new Scanner(System.in);
        int resp = 0;
        float umaDistanciaObtidaUm[]  = new float[3];
        float umaDistanciaObtidaDois[]= new float[3] ;



        float notasJogadorUm[] = new float[5];
        float notasJogadorDois[] = new float[5];



        System.out.println("\t\tOlá jogadores, sejam bem vindos as Olímpiadas de Chernobil\n\n");
        System.out.println("O jogador 1 se chama João e o jogador 2 se chama Murillo!\n");
        do{
            do {
                System.out.println("Escolha uma modalidade\n1 - Arremesso de Chernobil\n2 - Ginástica de Chernobil\n0 - Sair");
                resp = sc.nextInt();
                if (resp < 0 || resp > 2) {
                    System.out.println("Opção inválida.");
                }
            }while(resp<0||resp>2);
            if(resp==1){
                System.out.println("Arremesso de Chernobil ");
                for (int i = 0; i < 3; i++) {
                    System.out.println("Coloque o arremesso "+(i+1)+ " do Jogador 1");
                    umaDistanciaObtidaUm[i] = sc.nextFloat();

                }
                for (int i = 0; i < 3; i++) {
                    System.out.println("Coloque o arremesso "+(i+1)+  " do Jogador 2");
                    umaDistanciaObtidaDois[i] = sc.nextFloat();

                }
                ArremessoDePeso arremessoDePeso = new ArremessoDePeso(jogadorUm, umaDistanciaObtidaUm, jogadorDois, umaDistanciaObtidaDois);

                arremessoDePeso.defineArremeco();
            }else if(resp == 2){
                System.out.println("Ginástica de Chernobil");
                for (int i = 0; i < 5; i++) {
                    System.out.println("Coloque a nota "+(i+1)+"do Jogador 1");
                    notasJogadorUm[i] = sc.nextFloat();

                }
                for (int i = 0; i < 5; i++) {
                    System.out.println("Coloque a nota "+(i+1)+"do Jogador 2");
                    notasJogadorDois[i] = sc.nextFloat();

                }
                GinasticaArtistica ginasticaArtistica = new GinasticaArtistica(jogadorUm, notasJogadorUm,jogadorDois, notasJogadorDois);

                ginasticaArtistica.defineResultados();
            }else{
                System.out.println("Você escolheu sair.");
            }

        }while(resp!=0);



        sc.close();



    }
}