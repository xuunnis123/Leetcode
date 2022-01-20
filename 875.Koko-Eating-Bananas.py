class Solution:
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        
        minspeed, maxspeed = 1, max(piles)
        
        while minspeed <= maxspeed:
            midspeed = minspeed + (maxspeed - minspeed)//2
            hour = 0
            
            for i in piles:
                hour += math.ceil(i/midspeed)
            if hour>h:
                minspeed = midspeed + 1
            else:
                maxspeed = midspeed - 1
        return minspeed
        
        
        
        