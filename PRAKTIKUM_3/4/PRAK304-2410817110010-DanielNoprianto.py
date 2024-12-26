bilangan=int(input(""))
if bilangan == 0:
    print("Nol")
elif 1 <= bilangan <= 9:
    print("Satuan")
elif 11 <= bilangan < 20:
    print("Belasan")
elif 10 == bilangan or 20<=bilangan<=99:
    print("Puluhan")
else:
    print("Anda Menginput Melebihi Limit Bilangan")