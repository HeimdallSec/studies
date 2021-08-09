"""
Operadores lógicos
and, or, not
in e not in
"""
# compa1 = 2
# compa2 = 3

# Verdadeiro E Verdadeiro
# print(compa1 and compa2 == 3)

# Verdadeiro OU Verdadeiro
# print(compa1 or compa2)

# a = "1"
# b = 0

# if not a:
#     print("Por favor, preencha o valor de A.")
# else:
#     print("Valor de A preenchido.")

# nome = "Luiz Otávio."

# if "u" not in nome:
#     print("Não há letra 'u' no seu nome.")
# else:
#     print("Há a letra 'u' no nome.")

user = input("Usuário: ")
passwd = input("Senha: ")

user_db = "luiz"
passwd_db = "123456"

if user == user_db and passwd == passwd_db:
    print("Login bem sucedido!")
else:
    print("Usuário ou senhas inválidos")
