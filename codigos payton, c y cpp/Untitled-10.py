def es_palindromo(palabra):
    return palabra == palabra[::-1]

print(es_palindromo("radar"))  # True
print(es_palindromo("python"))  # False
