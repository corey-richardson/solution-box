class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        dict = {}
        for number in nums:
            if number in dict:
                dict[number] += 1
            else:
                dict[number] = 1
        
        for key in dict:
            if dict[key] == 1:
                return key