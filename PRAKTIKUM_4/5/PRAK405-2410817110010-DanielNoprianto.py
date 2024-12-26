baris, pengali = map(int,input("").split())
total = 0

for i in range (1, baris + 1):
    a = 0
    print("(", end="")

    for j in range (1, i + 1):
        print(f"{j} * {pengali}", end="")
        a += j * pengali

        if j < i or i > j:
            print(") + (", end="")

    print(f") = {a}")
    total += a

print(f"{total}")