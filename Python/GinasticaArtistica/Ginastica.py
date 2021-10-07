QUANTIDADE_DE_ATLETAS = 2
QUANTIDADE_DE_JUIZES = 5

class modalidadeGinasticaArtistica():
  print("\n  --------------------------------------")
  print("Bem-Vindo a modalidade Ginastica Artistica")
  print("  --------------------------------------")

  for i in range(QUANTIDADE_DE_ATLETAS):
    print("\n  NOTA DA GINASTA - ", i+1)
    print("  ---------------------")
    for j in range(QUANTIDADE_DE_JUIZES):
        print("\nJuiz - ", j + 1)
        nota = float(input("Digite a sua nota: "))
        somanota =+ nota

return somanota