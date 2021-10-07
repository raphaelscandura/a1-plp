#Criação da função Arremesso de Peso
QUANTIDADE_DE_ARREMESSO = 3
QUANTIDADE_DE_ATLETAS = 2

class modalidadeArremesodePeso():
  print("\n --------------------------------------")
  print("Bem-Vindo a modalidade Arremesso de Peso")
  print(" --------------------------------------")

  for i in range(QUANTIDADE_DE_ATLETAS):
    print("\n  ATLETA - ", i+1)
    print("--------------")
    for j in range(QUANTIDADE_DE_ARREMESSO):
      nota = float(input("Distancia da jº: ", j + 1))

return somanotaarremesso