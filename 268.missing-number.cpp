/*
 * @lc app=leetcode id=268 lang=cpp
 *
 * [268] Missing Number
 */

// @lc code=start
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int result=0;
        int count=nums.size();
        //accumulate(begin[nums],end[nums],0)
        
        result=(count*(count+1))/2-accumulate(begin(nums),end(nums),0);
        return result;
    }
};
// @lc code=end

