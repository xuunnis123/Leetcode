class Solution {
    public List<List<Integer>> threeSum(int[] nums) {

        Arrays.sort(nums);

        List<List<Integer>> taskList=new ArrayList<List<Integer>>();

        int save1=0;
        int save2=0;
        int save3=0;

        System.out.println("size="+nums.length);
        for(int i=0;i<nums.length-2;i++){
            if(i==0|| nums[i]!=nums[i-1]){
                int sum=0-nums[i];
                int lo=i+1;
                int hi=nums.length-1;
                while(lo<hi){

                        List<Integer>result=new ArrayList<Integer>();
                        if(nums[lo]+nums[hi]==sum)
                        {
                            result.add(nums[i]);
                            result.add(nums[lo]);
                            result.add(nums[hi]);
                            taskList.add(result);

                            while(lo<hi && nums[lo]==nums[lo+1])lo++;
                            while(lo<hi && nums[hi]==nums[hi-1])hi--;
                            lo++; hi--;
                        }

                        else if(nums[lo]+nums[hi]<sum){
                           lo++;
                        }
                        else{
                            hi--;
                        }




            }
        }

    }
        return taskList;
}
}
