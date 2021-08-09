nome = "Luiz"
idade = 32  # int
altura = 1.80  # float
e_maior = idade > 18  # bool
peso = 80
imc = peso / (altura ** 2)

print(nome, "tem", idade, "anos com", str(altura) + "m de altura", "e o IMC é:", peso / (altura ** 2))
print(f"{nome} tem {idade} anos com {altura}m de altura e o IMC é {imc:.2f}")
print("{0} tem {0} anos com {2}m de altura e o IMC é {3:.2f}".format(nome, idade, altura, imc))
print("{n} tem {i} anos com {a}m de altura e o IMC é {im:.2f}".format(n=nome, i=idade, a=altura, im=imc))