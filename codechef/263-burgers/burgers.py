# cook your dish here
T = int( input() )

for i in range(T):
    print( min( map(int, input().split() ) ) )