hour = input("Digite um horário 0h - 23h: ")

if hour.isdigit():
    hour = int(hour)

    if hour >= 0 and hour <= 11:
        print("Bom dia!")
    elif hour >= 12 and hour <= 17:
        print("Boa tarde!")
    elif hour >= 18 and hour <= 23:
        print("Boa noite!")
    else:
        print("Por favor, digite um horário entre 0h - 23h.")
else:
    print("Caractere não classificado como inteiro.")