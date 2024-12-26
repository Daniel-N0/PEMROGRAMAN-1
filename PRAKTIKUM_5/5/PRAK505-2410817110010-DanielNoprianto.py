def Biodata(tahunlahir, Namaku, Asal):
    tahun_sekarang = 2020
    umur = tahun_sekarang - tahunlahir
    print("Perkenalkan Nama Saya : ", Namaku)
    print("Umur Saya : ", umur)
    print("Saya Adalah Angkatan : ", tahun_sekarang)
    print("Asal Saya dari : ", Asal)

tahunLahir = int(input())
Namaku = input()
Asal = input()
Biodata(tahunLahir, Namaku, Asal) 