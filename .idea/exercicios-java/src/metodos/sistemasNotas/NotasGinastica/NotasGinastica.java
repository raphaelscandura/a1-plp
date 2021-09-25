package metodos.sistemasNotas.NotasGinastica;

import java.util.Scanner;

public class NotasGinastica {
    private int juizes = 5;
    private float[] notasJuizes = new float[5];
    private float calculoNotas;
    private Scanner leituraDeDados = new Scanner(System.in);

    public float getCalculoNotas() {
        int calculoNotas = 0;
        int notas = 0;

        for (int i = 0; i < juizes; i++)
            if (notasJuizes[i] < notasJuizes[notas])
                notas = i;

        for(int j = 0; j < juizes; j++)
            if(j != notas)
                calculoNotas += notasJuizes[j];

        return calculoNotas;
    }

    public void setCalculoNotas(float calculoNotas) {
        this.calculoNotas = calculoNotas;
    }
}