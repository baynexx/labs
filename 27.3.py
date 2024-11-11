while True:
    try:
        N=int(input("Введите целое число n="))
    except:
        print("Это не целое число,попробуй еще раз!")
    else:
        if n<=1:
            print("Это целое число не больше 1,попробуй еще раз!")
        else:
            break
k = 0

for i in range(1, N+1):
    k += 2*i - 1
    print('Квадрат числа', i, ':', k)

    
