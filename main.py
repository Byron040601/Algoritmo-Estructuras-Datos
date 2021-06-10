
print("")
print("Esta es una multiplicación de Matrices \n")

row1 = int(input("Ingrese el tamaño de la fila: "))
col1 = int(input("Ingrese el tamaño de la comlumna: "))

print("")

arreglo1 = []
for i in range(row1):
    arreglo1.append([])
    for j in range(col1):
        valor = int(input("Ingrese los valores de la Fila {}, Columnna {}: ".format(i + 1, j + 1)))
        arreglo1[i].append(valor)

print("")

row2 = int(input("Ingrese el tamaño de la fila: "))
col2 = int(input("Ingrese el tamaño de la comlumna: "))

print("")

arreglo2 = []
for i in range(row2):
    arreglo2.append([])
    for j in range(col2):
        valor = int(input("Ingrese los valores de la Fila {}, Columnna {}: ".format(i + 1, j + 1)))
        arreglo2[i].append(valor)

print("")
print("Matriz 1: ", arreglo1)
print("Matriz 2: ", arreglo2)

print("")

arreglo3 = []
result = []

for i in range(row1):
    arreglo3.append([0] * col2)

for i in range(row1):
    for j in range(col2):
        for k in range(col1):
            arreglo3[i][j] += arreglo1[i][k] * arreglo2[k][j]

print("Resultado de la multiplicación")
print(arreglo3)