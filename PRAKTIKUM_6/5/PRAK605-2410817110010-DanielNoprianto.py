ordo = int(input())

print("Matriks A")
matrixA = [list(map(int, input().split())) for _ in range(ordo)]

print("Matriks B")
matrixB = [list(map(int, input().split())) for _ in range(ordo)]

matrixAB = [[0] * ordo for _ in range(ordo)]
for i in range(ordo):
    for j in range(ordo):
        for k in range(ordo):
            matrixAB[i][j] += matrixA[i][k] * matrixB[k][j]

print("Matriks AXB")
for row in matrixAB:
    print(" ".join(map(str, row)))