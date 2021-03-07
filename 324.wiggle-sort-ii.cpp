/*
 * @lc app=leetcode id=324 lang=cpp
 *
 * [324] Wiggle Sort II
 */

// @lc code=start
class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        vector<int> result;
        vector<int> sortedBuffer;
        int size=nums.size();
        sort(nums.begin(),nums.end());
        bool less = false;
        int big=size-1;
        int small=size%2==0?size/2-1:size/2;
        int i=0;
        while(size>0){
            if(less){
                result.push_back(nums[big]);
                big--;
                less=false;
            }
            else{
                result.push_back(nums[small]);
                small--;
                less=true;
            }
            size--;
        }
        nums=result;
        
    }
};
// @lc code=end

