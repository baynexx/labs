while True:
    try:
        n=int(input("Введите целое число n="))
    except:
        print("Это не целое число,попробуй еще раз!")
    else:
        if n<=1:
            print("Это целое число не больше 1,попробуй еще раз!")
        else:
            break
for i in range(10, 21):
    s = i ** 2
    print('Квадрат числа',i, 'равен',s)