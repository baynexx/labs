import random

while True:
    try:
        m = int(input("Введите число M - "))
        if m < 0:
            print("Это число меньше 0,попробуйте еще раз")
        else:
            break
    except:
        print("Ошибка,попробуйте еще раз")

while True:
    try:
        n = int(input("Введите число N - "))
        if n < 0:
            print("Это число меньше 0,попробуйте еще раз")
        else:
            break
    except:
        print("Ошибка,попробуйте еще раз")

A = []
for i in range(m):
    n1 = []
    for j in range(n):
        n1.append(random.randint(-10, 10))
    A.append(n1)
print(A)
ma = 30
stroka = 0
stolb = 0
for i in range(m):
    for j in range(n):
        if A[i][j] < ma:
            ma = A[i][j]
            stroka = i
            stolb = j
print("Минимальное число - ", ma)

i = 0
while i < m:
    del A[i][stolb]
    i += 1
del A[stroka]
print(A)