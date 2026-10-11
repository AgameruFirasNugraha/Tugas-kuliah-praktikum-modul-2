pi = 22 / 7

data = []
while len(data) < 2:
    data = data + input().split()

r = float(data[0])
t = float(data[1])

volume = pi * r * r * t
luas = 2 * pi * r * (r + t)
keliling = 2 * pi * r

print("Volume = %.2f" % volume)
print("Luas = %.2f" % luas)
print("Keliling = %.2f" % keliling)