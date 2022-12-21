n = int( input() )

for i in range(n):
    sum = 0
    num = int( input() )
    for digit in str(num):
        sum += int( digit )
    print(sum)
        