from Menu import entradadousuario
from Ginastica import modalidadeGinasticaArtistica
from Arremesso import modalidadeArremesodePeso

class ValidaMenu():

    if entradadousuario == 1:
      modalidadeGinasticaArtistica()
    elif entradadousuario == 2:
      modalidadeArremesodePeso()
    else:
      print("\n   -------------------------------------------------------------")
      print("   | Valor invalido                                            |\n   | Selecione Ginastica Artistica [1] ou Arremeso de Peso [2] |")
      print("   -------------------------------------------------------------\n")
