while True:
    print("Pilih program")
    print("1. Penjumlahan")
    print("2. Pengurangan")
    print("3. Perkalian")
    print("4. Pembagian")
    print("5. Exit")

    pilihan = int(input("Masukkan pilihan : "))

    if pilihan == 5:
        print("Terimakasih, telah menggunakan kalkulator DANIEL NOPRIANTO")
        break

    elif pilihan >= 1 and pilihan <= 5:

        nilai_pertama = float(input("Masukkan nilai pertama : "))
        nilai_kedua = float(input("Masukkan nilai pertama : "))

        if pilihan == 1:
            hasil = nilai_pertama + nilai_kedua
            print(f"Hasil perjumlahan antara {nilai_pertama:.2f} dengan {nilai_kedua:.2f} adalah {hasil:.2f}")
            print("")

        elif pilihan == 2:
            hasil = nilai_pertama - nilai_kedua
            print(f"Hasil pengurangan antara {nilai_pertama:.2f} dengan {nilai_kedua:.2f} adalah {hasil:.2f}")
            print("")

        elif pilihan == 3:
            hasil = nilai_pertama * nilai_kedua
            print(f"Hasil perkalian antara {nilai_pertama:.2f} dengan {nilai_kedua:.2f} adalah {hasil:.2f}")
            print("")

        elif pilihan == 4:
            hasil = nilai_pertama / nilai_kedua
            print(f"Hasil pembagian antara {nilai_pertama:.2f} dengan {nilai_kedua:.2f} adalah {hasil:.2f}")
            print("")
        
    else:
        print("Input anda salah, silahkan coba lagi")
        print("")
        continue