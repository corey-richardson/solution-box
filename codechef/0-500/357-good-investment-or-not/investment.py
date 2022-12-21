# An investment is called good if and only if the interest rate of the investment
# is at least twice of the inflation rate.

# cook your dish here
for i in range(int(input())):
    rates = input().split()
    
    if int(rates[0]) >= 2*int(rates[1]):
        print("YES")
    else: print("NO")