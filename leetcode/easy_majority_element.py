class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        dict = {}
        for number in nums:
            if number in dict:
                dict[number] += 1
            else:
                dict[number] = 1
                
        majority = sum(dict.values()) / 2
        for key in dict:
            if dict[key] > majority:
                return key