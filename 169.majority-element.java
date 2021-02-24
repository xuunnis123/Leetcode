class Solution {
    public int majorityElement(int[] nums) {
        Arrays.sort(nums);
        int majors=(nums.length%2==1)?nums.length/2+1:nums.length/2;

        if(nums.length>1){
            return nums[majors-1];
        }
        else{
            return nums[0];
        }
    }
}
