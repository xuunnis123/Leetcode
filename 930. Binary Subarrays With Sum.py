class Solution:
    def numSubarraysWithSum(self, nums: List[int], goal: int) -> int:
        def get_most(k):
            result = left = 0
            for right in range(len(nums)):
                k -= nums[right]
                
                while left <= right and k < 0:
                    k += nums[left]
                    left += 1
                
                result += right - left + 1
            
            return result
        return get_most(goal) - get_most(goal-1)