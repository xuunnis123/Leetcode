/*
 * @lc app=leetcode id=22 lang=cpp
 *
 * [22] Generate Parentheses
 */

// @lc code=start
class Solution {
public:
    void matchParenthesis(vector<string> &result,string thisResult,int n ,int left , int right){
        //left= 已使用“(”個數 
        
        if(left==n && right==n){
            
            result.push_back(thisResult);
            thisResult="";
            
        }else{
            
            if(left<n && left>=0){
               matchParenthesis(result,thisResult+"(",n,left+1,right);
            }
            if(right<left && right<n){
                matchParenthesis(result,thisResult+")",n,left,right+1);
            }
           
        
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> result;
 
        string thisResult;
        matchParenthesis(result,thisResult,n,0,0);

        return result;
    }
};
// @lc code=end

