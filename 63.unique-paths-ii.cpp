/*
 * @lc app=leetcode id=63 lang=cpp
 *
 * [63] Unique Paths II
 */

// @lc code=start
class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        
        vector<vector<int>>record(obstacleGrid);
        //std::fill(record.begin(), record.end(), 0);
        
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        
        for( int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                bool flag= false;
                
                
                if(i==0||j==0){
                    record[i][0]=1;
                    record[0][j]=1;
                    
                }
                if(obstacleGrid[i][j]==1){
                    if(i==0 &&j==0) return 0;
                    record[i][j]=0;
                    flag=true;
                }
                
                if((i>0) && (record[i-1][0]==0)){
                        record[i][0]=0;
                }
                if((j>0) && (record[0][j-1]==0)){
                        record[0][j]=0;
                }
                if(i>0 && j>0 && !flag){
                        record[i][j]=record[i][j-1]+record[i-1][j];
                }
               
            }
        }

        
        return record[m-1][n-1];
    }
};
// @lc code=end

