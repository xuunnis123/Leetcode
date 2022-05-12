class Solution:
    def totalFruit(self, fruits: List[int]) -> int:
        save = 0
        result = -1
        baskets = collections.Counter()
        left = 0
        for right in range(len(fruits)):
            
            baskets[fruits[right]] += 1
            
            while len(baskets) > 2 and left <= right:
                
                if baskets[fruits[left]] == 0:
                    del baskets[fruits[left]]
                else:
                    baskets[fruits[left]] -= 1
                    if baskets[fruits[left]] == 0:
                        del baskets[fruits[left]]
                left += 1
            save = right - left + 1
            if save > result:
                result = save
        return result