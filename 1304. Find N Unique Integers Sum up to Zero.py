class Solution:
    def sumZero(self, n: int) -> List[int]:
        
        if n%2 == 0: 
            res = []
        else: 
            res = [0]
        for i in range(1,n//2 +1):
        
            res.append(i)
            res.append(-i)
            
        return res
# Solution2  
# class Solution:    
#     def sumZero(self, n):

#         return range(1 - n, n, 2)