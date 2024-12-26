#case pertama
jari_jari=int(input(""))
tinggi=int(input(""))

selimut = 2*22/7*jari_jari*tinggi
alas = 2*22/7*jari_jari*jari_jari
volume = 22/7*jari_jari*jari_jari*tinggi
luas = selimut+alas
keliling = 2*22/7*jari_jari

print(f"Volume = {volume:.2f}")
print(f"Luas = {luas:.2f}")
print(f"Keliling = {keliling:.2f}") 

#case kedua
r,t=map(int,input().split())

s = 2*22/7*r*t
a = 2*22/7*r*r
v = 22/7*r*r*t
l = s+a
k = 2*22/7*r

print(f"Volume = {v:.2f}")
print(f"Luas = {l:.2f}")
print(f"Keliling = {k:.2f}") 