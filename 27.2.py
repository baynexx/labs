M = 80
m1 = 400
m2 = range(100, 320, 20)

for m2 in m2:
    a = (m1 - m2)/(M + m1 + m2)
    print(f"Для m2 = {m2} г. ускорение равно {a}")