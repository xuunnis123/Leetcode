class Solution:
    def balancedString(self, s: str) -> int:
        
        count = collections.Counter(s)
        
        res = n = len(s)
        i = 0
        
        for j,c in enumerate(s):
            
            count[c] -= 1
            
            while i < n and all( n//4 >= count[k] for k in count ):
                
                if i > j:
                    res = 0
                    break
                
                count[s[i]] += 1
                res = min(res, j-i+1)
                i += 1
                
                
        return res