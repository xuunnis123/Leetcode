class Solution {
    public int findKthLargest(int[] nums, int k) {
        Arrays.sort(nums);
        int ksession=nums.length-k;

        return nums[ksession];
    }
}
