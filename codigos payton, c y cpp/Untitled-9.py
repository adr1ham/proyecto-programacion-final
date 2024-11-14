def mcd(a, b):
    while b != 0:
        a, b = b, a % b
    return a

print(mcd(48, 18))  # 6
