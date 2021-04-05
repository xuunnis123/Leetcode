/*
 * @lc app=leetcode id=62 lang=cpp
 *
 * [62] Unique Paths
 */

// @lc code=start
class Solution {
public:
    int uniquePaths(int m, int n) {
        int result=0;
        int dp[m][n];
        if(m==1 || n==1) return 1;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                dp[i][0]=1;
                dp[0][j]=1;
                dp[i][j]=0;
                
                if(i==0 || j==0) continue;
                
                dp[i][j]=dp[i-1][j]+dp[i][j-1];
                
            }

        }
        result=dp[m-1][n-1];
        return result;
    }
};
// @lc code=end

