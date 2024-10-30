N = int(input('Введите целое число N: '))
k = 0

for i in range(1, N+1):
    k += 2*i - 1
    print('Квадрат числа', i, ':', k)
