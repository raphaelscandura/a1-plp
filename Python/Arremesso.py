from Esporte import *


class Arremesso(Esporte):

  def __init__(self):
    super().__init__(self.__atleta_jogadorUm, self.__atleta_jogadorDois)
    


  def defineVencedorArremesoDePeso():

    QUANTIDADE_DE_ARREMESSO = 3

    distancia_um = []
    distancia_dois = []

    print("\n  ATLETA 1 ")
    print("  ---------------------")

    for j in range(QUANTIDADE_DE_ARREMESSO):
      cria_lista_um = float(input("Distancia "))
      distancia_um.append(cria_lista_um)

    print("\n  ATLETA 2 ")
    print("  ---------------------")
    
    for n in range(QUANTIDADE_DE_ARREMESSO):
      cria_lista_dois = float(input("Distancia "))
      distancia_dois.append(cria_lista_dois)

    distancia_maxima_um = max(distancia_um)
    distancia_maxima_dois = max(distancia_dois)

    if(distancia_maxima_um > distancia_maxima_dois):
      print("\nO atleta 1 teve o arremesso maior")
      
    elif(distancia_maxima_dois > distancia_maxima_um):
      print("\nO atleta 2 teve o arremesso maior")

    elif(distancia_maxima_um == distancia_maxima_dois):
      print("\nO atleta 1 e atleta 2 empataram, checando o segundo lancamento")
    
      if(distancia_um[1] > distancia_dois[1]):
        print("\nO atleta 1 venceu")
      
      elif(distancia_um[1] < distancia_dois[1]):
        print("\nO atleta 2 venceu")
      
      else:
        print("\nO atleta 1 e atleta 2 empataram, checando o terceiro lançamento")
        
        if(distancia_um[2] > distancia_dois[2]):
          print("\nO atleta 1 venceu")
        
        elif(distancia_um[2] < distancia_dois[2]):
          print("\nO atleta 2 venceu")

        else:
          print("\nO atleta 1 e atleta 2 empataram")