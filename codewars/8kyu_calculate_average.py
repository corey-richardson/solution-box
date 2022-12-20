def find_average(numbers):
    total = 0
    for i in numbers:
        total += i
    return total / len(numbers)

find_average([8,5,2,9])