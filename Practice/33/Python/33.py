import builtins
def create(size,start,step):
    lis = [start]
    a = start
    for i in range(size):
        a = a+step
        lis.append(a)
    return lis


def sort(lis,size):
    for i in range(1, len(lis)):
        temp = lis[i]
        j = i - 1
        while (j >= 0 and temp < lis[j]):
            lis[j + 1] = lis[j]
            j = j - 1
        lis[j + 1] = temp
    return lis



def print(lis,size):
    builtins.print("[",end = "")
    for i in range(size):
        if(i+1 == size):
            builtins.print(lis[i], end = "")
        else:
            builtins.print(lis[i], end = ",")
    builtins.print("]")
    lis.clear()


size = int(input("Введите размер массива "))
start = int(input("Введите начало массива "))
step = int(input("Введите шаг арифметической прогрессии "))
print(sort(create(size,start,step),size),size)
