from math import fabs 
print('Введите начальное положение x0')
x0 = int(input())
print("Введите начальную скорость v0")
v0 = int(input())
print("Введите время")
t = int(input())
g = 9.8
print("Положение после вычислений x(t)= ", fabs((x0+v0*t-(g*t*t)/2)-x0))
