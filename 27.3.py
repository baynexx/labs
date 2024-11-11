while True:
    try:
        n = int(input('введите целое число'))
        break
    except:
        print('ошибка')
from random import *
q = [randint(-20,20) for i in range(n)]
maxi = -100
for i in q:
    if i>maxi:
        maxi=i
k = 0
for u in q:
    if u==maxi:
        break
    if u>0:
        k+=u
q1 = q[::-1]
print(k,q1)


    
