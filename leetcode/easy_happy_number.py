class Solution:
    def isHappy(self, n: int) -> bool:
        ls = []
        while n != 1:
            print(n)                        
            if n in ls: # looks for looping numbers, "have i already seen this numer in the cycle? if so, endless loop therefore false"
                return False
            ls.append(n)
            n = sum(int(i)**2 for i in str(n))
        return True