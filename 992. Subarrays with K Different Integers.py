class Solution:
    def subarraysWithKDistinct(self, nums: List[int], k: int) -> int:
        def subarrays(number):
            count = collections.Counter()
            result = left = 0

            for right in range(len(nums)):
                if count[nums[right]] == 0:
                    number -= 1
                count[nums[right]] += 1
                while number < 0 :
                    count[nums[left]] -= 1
                    if count[nums[left]] == 0:
                        number += 1
                    left += 1
                    
                result += right - left + 1
                
            return result
        
        return subarrays(k) - subarrays(k-1)