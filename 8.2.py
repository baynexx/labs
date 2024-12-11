def SortInc3(A,B,C):
    mx = 0
    mn = 10**10
    q = []
    q.append(A)
    q.append(B)
    q.append(C)
    for i in q:
        if i>mx: mx=i
        if i<mn: mn=i
    k = A
    if mn<A<mx: k=A
    if mn<B<mx: k=B
    if mn<C<mx: k=C
    return mn,k,mx
while True:
    try:
        A1=float(input('Введите A1 - '))
        break
    except:
        print('Это не действительное число!')
while True:
    try:
        B1=float(input('Введите B1 - '))
        break
    except:
        print('Это не действительное число!')
while True:
    try:
        C1=float(input('Введите C1 - '))
        break
    except:
        print('Это не действительное число!')
while True:
    try:
        A2=float(input('Введите A2 - '))
        break
    except:
        print('Это не действительное число!')
while True:
    try:
        B2=float(input('Введите B2 - '))
        break
    except:
        print('Это не действительное число!')
while True:
    try:
        C2=float(input('Введите C2 - '))
        break
    except:
        print('Это не действительное число!')
print(*SortInc3(A1,B1,C1))
print(*SortInc3(A2,B2,C2))
