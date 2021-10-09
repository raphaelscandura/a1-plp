package exercicios.java.atleta;

public class Atleta {
    private int idade;
    private String nacionalidade;
    private String nome;


    public Atleta(int idade, String nacionalidade, String nome){
        this.idade = idade;
        this.nacionalidade = nacionalidade;
        this.nome = nome;
    }

    public int getIdade() {
        return idade;
    }

    public void setIdade(int idade) {
        this.idade = idade;
    }

    public String getNacionalidade() {
        return nacionalidade;
    }

    public void setNacionalidade(String nacionalidade) {
        this.nacionalidade = nacionalidade;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }


}
