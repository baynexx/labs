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
for i in range(1,m+1):
    for j in range(1,m+1):
        if ((i+j)>(m+1)) and A[i-1][j-1]<0:
            k+=1
print('Количество отрицательных элементов ниже побочной диагонали -',k)



