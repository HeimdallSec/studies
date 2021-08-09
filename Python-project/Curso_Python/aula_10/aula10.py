"""
Formatando valores com modificadores - Aula 5

:s - Texto (strings)
:d - Inteiros (int)
:f - Números de ponto flutuante (float)
:.(NÚMERO)f - Quantidade de casas decimais (float)
:(CARACTERE) (> ou < ou ^) (QUANTIDADE) (TIPO - s, d ou f)

> - Esquerda
< - Direita
^ - Centro
"""

nome = "Otávio"
# sobrenome = "Miranda"
# nome_formatado = "{0:$^8} {1:#^9}".format(nome, sobrenome)
# print(nome_formatado)

print(nome.lower()) # Tudo minusculo
print(nome.upper()) # tudo maiusculo
print(nome.title()) # primeiras letras maiusculas