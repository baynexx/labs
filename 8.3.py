import random
def f(d):
  if len(d) == 1:
    return d[0]
  else:
    return d[0] * f(d[1:])
a=[]
a = [random.randint(1, 10) for i in range(10)]
print('Список:', a)
a1 = f(a)
print('Результат произведения элементов этого списка:', a1)