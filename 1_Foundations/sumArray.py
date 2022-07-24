def sumArray(array):
    sum = 0
    for i in range(1, len(array)):
        sum += array[i]
    return sum


array = [1, 1, 2, 3, 4, 5]
print(sumArray(array))
