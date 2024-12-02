d ={}
b = 'QWERTYUIOPASDFGHJKLZXCVBNMqwertyuiopasdfghjklzxcvbnmЙЦУКЕНГШЩЗХЪФЫВАПРОЛДЖЭЁЯЧСМИТЬБЮйцукенгшщзхъфывапролджэёячсмитьбю '
while True:
    try:
        s = input('Введите строку - ')
        f = True
        for i in s:
            if i not in b:
                f=False
        if f==True:
            break
        else:
            print('Строка должна состоять только из букв')
    except:
        print('Ошибка!!!')
for i in s:
    if i not in d and i!=' ':
        d[i]=[s.count(i)]
print(d)
x = input('Ввведите букву - ')
if x in s:
    print('Она встречается',*d.setdefault(x),'раз')
else:
    print('Такой буквы здесь нет!')