kode = input().strip()
pesan = input().strip()

if len(kode) != len(pesan):
    print("Panjang Kalimat berbeda, pesan palsu")
else:
    bintang = 0
    pagar = 0

    for k, p in zip(kode, pesan):
        if k == ' ' and p == ' ':
            continue
        if k == p:
            print("*", end="")
            bintang += 1
        else:
            print("#", end="")
            pagar += 1

    print(f"\n *= {bintang}")
    print(f" #= {pagar}")

    if bintang >= pagar:
        print("Pesan Asli")
    else:
        print("Pesan Palsu")