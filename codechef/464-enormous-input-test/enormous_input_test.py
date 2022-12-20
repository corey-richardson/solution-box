# We have populated the solutions for the 10 easiest problems for your support.
# Click on the SUBMIT button to make a submission to this problem.

(n, k) = map(int, input().split())

n_divisible = 0

for i in range(n):
	x = int(input())
	if x % k == 0:
		n_divisible += 1

print(n_divisible)	

