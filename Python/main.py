from GinasticaArtistica import GinasticaArtistica
from Arremesso import Arremesso




#Criação do menu principal 
print("       -----------------------------")
print("       | JOGOS OLIMPICOS EM PYTHON |")
print("       -----------------------------\n")
print("   --------------------------------------")
print("   | Escolha a modalidade para competir |")
print("   |   |0| - Sair                       |")
print("   |   |1| - Ginastica artistica        |")
print("   |   |2| - Arremesso de peso          |")
print("   --------------------------------------\n")


entradaDoUsuario = int(input("    Irá competir: "))

if entradaDoUsuario == 1:
  GinasticaArtistica.defineVencedorGinasticaArtistica()

elif entradaDoUsuario == 2:
  Arremesso.defineVencedorArremesoDePeso()

elif entradaDoUsuario == 0:
  print("       -----------------------------")
  print("       |   Encerrando programa...  |")
  print("       -----------------------------\n")

else:
  print("\n   -------------------------------------------------------------")
  print("   | Valor invalido                                            |\n   | Selecione Gi'nastica Artistica [1] ou Arremeso de Peso [2] |")
  print("   -------------------------------------------------------------\n")