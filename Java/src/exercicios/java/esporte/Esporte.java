package exercicios.java.esporte;

import exercicios.java.atleta.Atleta;

public class Esporte {
    private Atleta jogadorUm;
    private Atleta jogadorDois;
    private Atleta vencedor;

    public Esporte(Atleta jogadorUm,Atleta jogadorDois){
        this.jogadorUm = jogadorUm;
        this.jogadorDois = jogadorDois;

    }

    public Atleta getVencedor() {

        return vencedor;
    }


    public void setVencedor(Atleta vencedor) {
        this.vencedor = vencedor;
    }

    public Atleta getJogadorUm() {

        return jogadorUm;
    }


    public void setJogadorUm(Atleta jogadorUm) {
        this.jogadorUm = jogadorUm;
    }

    public Atleta getJogadorDois() {

        return jogadorDois;
    }


    public void setJogadorDois(Atleta jogadorDois) {
        this.jogadorDois = jogadorDois;
    }
}

