#case ke 1:
a, b, i, j, x, y = map(int, input().split()) 

hasil = (((a - b) * i) / j) - (x + y)

print(f"{hasil:.3f}\n")

#case ke 2:
A, B = map(int, input().split()) 
I, J = map(int, input().split()) 
X, Y = map(int, input().split()) 

Hasil = (((A - B) * I) / J) - (X + Y)

print(f"{Hasil:.3f}")