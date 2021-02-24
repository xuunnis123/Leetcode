class Solution {
    public int[][] matrixBlockSum(int[][] mat, int K) {
        int m= mat.length;

      
        System.out.println("m|n="+mat.length+" "+mat[0].length);
        int[][] answer=new int[m][mat[0].length];



        for(int i=0;i<m;i++){

            for(int j=0;j<mat[i].length;j++){


                int sum=0;
                sum=calSum(mat,i,j,K);

                answer[i][j]=sum;
            }


        }

        return answer;

    }
    private int calSum(int[][] mat,int x,int y,int K){

       int sum=0;

        for(int i=Math.max(0,x-K);i<=Math.min(x+K,mat.length-1);i++){
            for(int j=Math.max(0,y-K);j<=Math.min(y+K,mat[0].length-1);j++){

                sum+=mat[i][j];
            }
        }

        return sum;
    }
}
