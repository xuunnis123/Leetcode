class Solution {
    public int[] closestDivisors(int num) {
        int numStep1=(num+1);
        int numStep2=(num+2);
        for(int i=(int)Math.sqrt(numStep2);i>0;i--){
            if(numStep1%i==0){
                return new int[]{i,numStep1/i};
            }
            if(numStep2%i==0){
                return new int[]{i,numStep2/i};
            }

        }
        return new int[]{};
    }

}
