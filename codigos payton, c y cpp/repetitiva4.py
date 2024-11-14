numero = 17
for i in range(2, numero):
    if numero % i == 0:
        print(f"{numero} no es primo")
        break
else:
    print(f"{numero} es primo")
