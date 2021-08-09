"""
Iniciar com letra, pode conter número, separar _,
letras maiúsculas
"""
nome = "Luiz"
idade = 32  # int
altura = 1.80  # float
e_maior = idade > 18  # bool
peso = 80

print(nome, "tem", idade, "anos com", str(altura) + "m de altura", "e o IMC é:", peso / (altura ** 2))
