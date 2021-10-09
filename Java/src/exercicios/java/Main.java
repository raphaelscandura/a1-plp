package exercicios.java;

import exercicios.java.atleta.Atleta;
import exercicios.java.esporte.ArremessoDePeso;
import exercicios.java.esporte.GinasticaArtistica;

import java.util.Random;
import java.util.Scanner;
import java.lang.Math;
public class Main {

    public static void main(String[] args) {
        Atleta jogadorUm = new Atleta(19,"br","João");
        Atleta jogadorDois = new Atleta(19,"br","Murillo");

        float umaDistanciaObtidaUm[] = {(float)Math.random() * 40 + 1, (float)Math.random() * 40 + 1, (float)Math.random() * 40 + 1};
        float umaDistanciaObtidaDois[] = {(float)Math.random() * 40 + 1 , (float)Math.random() * 40 + 1, (float)Math.random() * 40 + 1};
        ArremessoDePeso arremessoDePeso = new ArremessoDePeso(jogadorUm, umaDistanciaObtidaUm, jogadorDois, umaDistanciaObtidaDois);


        float notasJogadorUm[] = {(float)Math.random() * 10, (float)Math.random() * 10, (float)Math.random() * 10, (float)Math.random() * 10, (float)Math.random() * 10};
        float notasJogadorDois[] = {(float)Math.random() * 10, (float)Math.random() * 10, (float)Math.random() * 10, (float)Math.random() * 10, (float)Math.random() * 10};
        GinasticaArtistica ginasticaArtistica = new GinasticaArtistica(jogadorUm, notasJogadorUm,jogadorDois, notasJogadorDois);


        System.out.println("\t\tOlá jogadores, sejam bem vindos as Olímpiadas de Chernobil\n\n");
        System.out.println("Arremesso de Chernobil ");
        arremessoDePeso.defineArremeco();


        System.out.println("\n");

        System.out.println("Ginástica de Chernobil");
        ginasticaArtistica.defineResultados();

    }
}
