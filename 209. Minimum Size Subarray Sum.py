import sys

class Solution:
    def minSubArrayLen(self, target: int, nums: List[int]) -> int:
        nums_size = len(nums)
        minRecord = sys.maxsize
        save = 0
        start = 0
        for end in range(nums_size):
            save += nums[end]
            
            while save >= target:
                
                minRecord = min(end - start + 1 ,minRecord)
                save -= nums[start]
                start += 1
                
       
        return 0 if minRecord ==  sys.maxsize else minRecord
            