a = 'АБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЩЪЫЬЭЮЯабвгдеёжзийклмнопрстуфхцчшщъыьэюя ,.!?'
while True:
    n = input('Введите текст')
    g = 0
    for i in n:
        if i not in a:
            g += 1
    if g == 0:
        break
    else:
        print('Попробуйте еще раз')
gl = 'уеёэоаыиюяЯЫУАЕОИЮЭЁ'
k = 0
b = ''
maxi = -1
maxb=''
for i in range(len(n)):
    if k>maxi or len(b)>len(maxb):
        maxi=k
        maxb=b
    if n[i]==' ' or n[i]=='.' or n[i]==',' or n[i]=='?' or n[i]=='!':
        k=0
        b=''
    else:
        b+=n[i]
        if n[i] in gl:
            k+=1
if k>maxi or len(b)>len(maxb):
    maxi=k
    maxb=b
print(maxb)
