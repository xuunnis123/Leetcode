class Solution {
public:
    int search(vector<int>& nums, int target) {
        int r=nums.size()-1;
        int l=0;

        while(l<=r){

                int middle=(l+r)/2;
                if(target==nums[middle]){

                    return middle;
                }
                else if(target>nums[middle]){
                        l=middle+1;

                }
                else{
                        r=middle-1;
                }



        }
        return -1;
    }

};
