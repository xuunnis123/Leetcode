class Solution:
    def sortColors(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        begin = 0
        end = len(nums)-1
        current = 0
        
        
        while current <= end:
            
            if nums[current]< 1:
                nums[current], nums[begin] = nums[begin], nums[current]
                begin += 1
                current += 1
            elif nums[current] > 1 :
                nums[current], nums[end] = nums[end], nums[current]
                end -= 1
                
            else:
                current += 1
        return nums
        