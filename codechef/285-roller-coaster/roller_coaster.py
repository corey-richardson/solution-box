# cook your dish here
T = int(input())

for i in range(T):
    # son height  ride height
    heights = input().split()
    if int(heights[0]) >= int(heights[1]):
        print("YES")
    else: print("NO")
