#Criação da função Arremesso de Peso
QUANTIDADE_DE_ARREMESSO = 3
QUANTIDADE_DE_ATLETAS = 2

print("\n --------------------------------------")
print("Bem-Vindo a modalidade Arremesso de Peso")
print(" --------------------------------------")

dist1 = []
dist2 = []

print("\n  ATLETA 1 ")
print("  ---------------------")
for j in range(QUANTIDADE_DE_ARREMESSO):
  d1 = float(input("Distancia "))
  dist1.append(d1)

print("\n  ATLETA 2 ")
print("  ---------------------")
for n in range(QUANTIDADE_DE_ARREMESSO):
  d2 = float(input("Distancia "))
  dist2.append(d2)

max_dist1 = max(dist1)
max_dist2 = max(dist2)

if(max_dist1 > max_dist2):
  print("\nO atleta 1 teve o arremesso maior")
elif(max_dist2 > max_dist1):
  print("\nO atleta 2 teve o arremesso maior")
elif(max_dist1 == max_dist2):
  #TERMINAR