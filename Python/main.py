from ArremessodePeso import modalidadeArremessodePeso
from GinasticaArtistica import modalidadeGinasticaArtistica

  #Criação do menu principal 
print("       -----------------------------")
print("       | JOGOS OLIMPICOS EM PYTHON |")
print("       -----------------------------\n")
print("   --------------------------------------")
print("   | Escolha a modalidade para competir |")
print("   |   |1| - Ginastica artistica        |")
print("   |   |2| - Arremeso de peso           |")
print("   --------------------------------------\n")

  #Entrada do usuario
entradadousuario = int(input("    Irá competir: "))

if entradadousuario == 1:
  modalidadeGinasticaArtistica()
elif entradadousuario == 2:
  modalidadeArremessodePeso()
else:
  print("\n   -------------------------------------------------------------")
  print("   | Valor invalido                                            |\n   | Selecione Ginastica Artistica [1] ou Arremeso de Peso [2] |")
  print("   -------------------------------------------------------------\n")

