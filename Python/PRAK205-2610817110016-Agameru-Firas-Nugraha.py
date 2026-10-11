import math

data = []
while len(data) < 2:
    data = data + input().split()

a = int(data[0])
b = int(data[1])

tinggi = a
alas = math.sqrt(b ** 2 - a ** 2)
keliling = alas + tinggi + b
luas = alas * tinggi / 2

print("Alas = %d cm" % alas)
print("Tinggi = %d cm" % tinggi)
print("Keliling = %d cm" % keliling)
print("Luas = %d cm^2" % luas)