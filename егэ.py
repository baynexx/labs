while True:
    try:
        m = int(input('Ввудите число М - '))
        if m<0:
            print('Это число меньше 0,попробуйте еще раз')
        else:
            break
    except:
        print('Ошибка,попробуйте еще раз')
import random
A=[]
for i in range(m):
    n=[]
    for j in range(m):
        n.append(random.randint(-10,10))
    A.append(n)
print(A)
k = 0
for i in range(m):
    for j in range(m):
        if ((i+j)>(m+1)) and A[i][j]<0:
            k += 1
print(k)



