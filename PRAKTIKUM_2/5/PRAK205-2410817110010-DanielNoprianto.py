import math
#case pertama
tinggi, sisi_miring=map(int, input().split())
alas = math.sqrt(sisi_miring**2-tinggi**2)
keliling = alas+tinggi+sisi_miring
luas = 0.5*alas*tinggi

print(f"Alas= {alas:.0f} cm")
print(f"Tinggi= {tinggi:.0f} cm")
print(f"Keliling = {keliling:.0f} cm")
print(f"Luas  = {luas:.0f} cm^2")

#case 2
a = float(input("\n"))
b = float(input(""))
c = math.sqrt(b**2-a**2)
k = a+b+c
l = 0.5*c*a

print(f"Alas= {c:.0f} cm")
print(f"Tinggi= {a:.0f} cm")
print(f"Keliling = {k:.0f} cm")
print(f"Luas  = {l:.0f} cm^2")