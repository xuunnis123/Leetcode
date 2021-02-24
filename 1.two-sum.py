
class Solution:
    def twoSum(self, nums: 'List[int]', target: 'int') -> 'List[int]':
        dict = {}
        for i in range(0, len(nums)):
           #print(i,dict,nums[i])
            if nums[i] in dict:
                return [dict[nums[i]], i]
            else:
                dict[target - nums[i]] = i
