package exercicios.java;

import metodos.atleta.Atleta;
import sistemaDeNotas.NotasGinastica;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String nome = "";
        int escolha;

        Atleta atletaUm = new Atleta();
        Atleta atletaDois = new Atleta();
        NotasGinastica notasGinastica = new NotasGinastica();

        //System.out.println("Bem vindo ao sistema de cálculos");
        //System.out.println("Digite seu nome:");
        //nome = scanner.nextLine();

        System.out.println("Seja bem vindo juíz " + nome);
        System.out.println("Escolha qual esporte deseja realizar os cálulos");
        System.out.println("1 - Arremeso de peso \n2 - Ginástica Artística");
        escolha = scanner.nextInt();

        do {
            if(escolha == 1) {
                System.out.println("Arremesso de peso");
            }
            else if(escolha == 2){
                System.out.println("Ginástica Artística");

            }
            else {
                System.out.println("Opção não encontrada, digite novamente");
                escolha = scanner.nextInt();
            }
        }while(escolha < 1 || escolha > 2);

    }
}
