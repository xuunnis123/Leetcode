class Solution:
    def longestOnes(self, nums: List[int], k: int) -> int:
        
        size = len(nums)
        left = 0
        result = 0
    
        for right in range(size):
            
            
            if nums[right] == 0:
                k -= 1    
            
            if k < 0:
                
                if nums[left] == 0:
                    k += 1
                left += 1
            result = right - left + 1
            
        return result