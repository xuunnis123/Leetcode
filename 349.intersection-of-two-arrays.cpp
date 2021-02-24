class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> num1Set(nums1.begin(), nums1.end());
        unordered_set<int> num2Set(nums2.begin(), nums2.end());
        vector<int> result;
        for(auto a:num2Set){

            if(num1Set.count(a)){
                result.push_back(a);
            }

        }
        return result;
    }
};
