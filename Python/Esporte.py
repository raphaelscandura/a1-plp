class Esporte:

  def _init_(self, atleta_jogadorUm, atleta_jogadorDois, atleta_vencedor):
    self.__atleta_jogadorUm = atleta_jogadorUm
    self.__atleta_jogadorDois = atleta_jogadorDois
    self.__atleta_vencedor = atleta_vencedor
  

  def getAtleta_vencedor(self):
    return self.__atleta_vencedor

  def setAtleta_Vencedor(self, atleta_vencedor):
    self.__atleta_vencedor = atleta_vencedor

  def getAtleta_JogadorUm(self):
    return self.__atleta_jogadorUm
 
  def setAtleta_JogadorUm(self, Atleta_jogadorUm):
    self.__atleta_jogadorUm = Atleta_jogadorUm

  def getAtleta_JogadorDois(self):
    return self.__atleta_jogadorDois


  def setJogadorDois(self, Atleta_jogadorDois):
    self.__Atleta_jogadorDois = Atleta_jogadorDois