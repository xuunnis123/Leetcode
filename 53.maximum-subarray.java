class Solution {
    public int maxSubArray(int[] nums) {
        int now=nums[0];
        int end=nums[0];

        for(int i=1; i<nums.length;i++){

            now=Math.max(now+nums[i],nums[i]);
            end=Math.max(now,end);
        }
       return end;
    }


}
