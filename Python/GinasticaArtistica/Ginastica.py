zQUANTIDADE_DE_ATLETAS = 2
QUANTIDADE_DE_JUIZES = 5

def modalidadeGinasticaArtistica():

  print("\n  --------------------------------------")
  print("Bem-Vindo a modalidade Ginastica Artistica")
  print("  --------------------------------------")

nota1 = []
nota2 = []

print("\n  NOTA DA GINASTA 1 ")
print("  ---------------------")
for j in range(QUANTIDADE_DE_JUIZES):
  print("\nJuiz - ", j + 1)
  n1 = float(input("Digite a sua nota: "))
  nota1.append(n1)

print("\n  NOTA DA GINASTA 2 ")
print("  ---------------------")
for n in range(QUANTIDADE_DE_JUIZES):
  print("\nJuiz - ", n + 1)
  n2 = float(input("Digite a sua nota: "))
  nota2.append(n2)

nota1.sort()
nota2.sort()

nota1.pop(0)
nota2.pop(0)

soma1 = sum(nota1)
soma2 = sum(nota2)

if(soma1 > soma2):
  print("\nGinasta 1 venceu")
elif(soma2 > soma1):
  print("\nGinasta 2 venceu")
else:
  print("\nGinasta 1 e Ginasta 2 empataram")