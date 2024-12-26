bilangan1, bilangan2, bilangan3 = map(int, input().split())

if bilangan1 <= bilangan2 and bilangan1 <= bilangan3:
    if bilangan2 <= bilangan3:
        hasil1, hasil2, hasil3 = bilangan1, bilangan2, bilangan3
    else:
        hasil1, hasil2, hasil3 = bilangan1, bilangan3, bilangan2
elif bilangan2 <= bilangan1 and bilangan2 <= bilangan3:
    if bilangan1 <= bilangan3:
        hasil1, hasil2, hasil3 = bilangan2, bilangan1, bilangan3
    else:
        hasil1, hasil2, hasil3 = bilangan2, bilangan3, bilangan1
else:
    if bilangan1 <= bilangan2:
        hasil1, hasil2, hasil3 = bilangan3, bilangan1, bilangan2
    else:
        hasil1, hasil2, hasil3 = bilangan3, bilangan2, bilangan1

print(f"{hasil1} {hasil2} {hasil3}")