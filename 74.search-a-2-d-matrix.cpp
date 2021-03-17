/*
 * @lc app=leetcode id=74 lang=cpp
 *
 * [74] Search a 2D Matrix
 */

// @lc code=start
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m,n=0;
        m=matrix.size();
        n=matrix[0].size();
        int right=m*n-1;
        int left=0;
        int x,y=0;
    
        if(m=0)return false;
        else{
            while(left<=right){
                int middle=(right+left)/2;
                x=middle/n;
                y=middle%n;
                if(target==matrix[x][y]){
                    
                    return true;
                }
                else if(matrix[x][y]>target){
                    right=middle-1;
                
                }
                else{
                    left=middle+1;
                }
                
            }
        
        return false;
        }
    }
};
// @lc code=end

