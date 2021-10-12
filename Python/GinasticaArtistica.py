from Esporte import *


class GinasticaArtistica(Esporte):

  def __init__(self):
    super().__init__(self.__atleta_jogadorUm, self.__atleta_jogadorDois)
    

  def defineVencedorGinasticaArtistica():

    QUANTIDADE_DE_JUIZES = 5

    nota_um = []
    nota_dois = []

    print("\n  NOTA DA GINASTA 1 ")
    print("  ---------------------")

    for j in range(QUANTIDADE_DE_JUIZES):
      print("\nJuiz - ", j + 1)

      cria_lista_um = float(input("Digite a sua nota: "))
      nota_um.append(cria_lista_um)

    print("\n  NOTA DA GINASTA 2 ")
    print("  ---------------------")

    for n in range(QUANTIDADE_DE_JUIZES):
      print("\nJuiz - ", n + 1)
      
      cria_lista_dois = float(input("Digite a sua nota: "))
      nota_dois.append(cria_lista_dois)

    nota_um.sort()
    nota_dois.sort()

    nota_um.pop(0)
    nota_dois.pop(0)

    soma_um = sum(nota_um)
    soma_dois = sum(nota_dois)

    if(soma_um > soma_dois):
      print("\nGinasta 1 venceu")

    elif(soma_dois > soma_um):
      print("\nGinasta 2 venceu")
    
    else:
      print("\nGinasta 1 e Ginasta 2 empataram")
