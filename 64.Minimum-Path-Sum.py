class Solution(object):
    def minPathSum(self, grid):
        """
        :type grid: List[List[int]]
        :rtype: int
        """
        if not grid or not grid[0]:
            return 0
        
        column = len(grid[0])
        row = len(grid)
    
        
        
        for c in range(column):
            for r in range(row):
                print(c,r)
                if c and r:
                    grid[r][c] += min(grid[r][c-1],grid[r-1][c])
                elif c:
                    grid[r][c] += grid[r][c-1]
                elif r:
                    grid[r][c] += grid[r-1][c]
       
        return grid[-1][-1]