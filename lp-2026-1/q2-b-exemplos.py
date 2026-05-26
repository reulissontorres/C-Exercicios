def calcular_j(k):
    """Calcula o valor de j baseado no valor de k"""
    match k:
        case 1 | 2:
            j = 2 * k - 1
        case 3 | 5:
            j = 3 * k + 1
        case 4:
            j = 4 * k - 1
        case 6 | 7 | 8:
            j = k - 2
        case _:
            j = None
    return j


# Exemplos de uso
print("Exemplos de uso para k com valores de 1 a 8:")
print("=" * 40)
print(f"{'k':<5} {'Fórmula':<20} {'j':<5}")
print("=" * 40)

for k in range(1, 9):
    j = calcular_j(k)

    # Determinar a fórmula usada
    if k in [1, 2]:
        formula = f"2 * {k} - 1"
    elif k in [3, 5]:
        formula = f"3 * {k} + 1"
    elif k == 4:
        formula = f"4 * {k} - 1"
    elif k in [6, 7, 8]:
        formula = f"{k} - 2"
    else:
        formula = "N/A"

    print(f"{k:<5} {formula:<20} {j:<5}")

print("=" * 40)

# Exemplos individuais detalhados
print("\nExemplos detalhados:")
print()

print("k = 1 → j = 2 * 1 - 1 = 1")
print("k = 2 → j = 2 * 2 - 1 = 3")
print("k = 3 → j = 3 * 3 + 1 = 10")
print("k = 4 → j = 4 * 4 - 1 = 15")
print("k = 5 → j = 3 * 5 + 1 = 16")
print("k = 6 → j = 6 - 2 = 4")
print("k = 7 → j = 7 - 2 = 5")
print("k = 8 → j = 8 - 2 = 6")
