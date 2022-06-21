class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        result = max_value = left = 0
        save = collections.Counter()
        
        for right in range(len(s)):
            
            save[s[right]] += 1
            
            while left <= right and (right - left + 1 - max(save.values())) > k:
                save[s[left]] -= 1
                left += 1
                
            max_value = right - left + 1
            result = max(result,max_value)
        return result
            
                