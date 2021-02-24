class Solution {
    public int maxIncreaseKeepingSkyline(int[][] grid) {
        int size= grid.length;
        int[] row=new int[size];
        int[] col=new int[size];
        for(int i=0;i<size;i++){
            for(int j=0;j<size;j++)
            {
                row[i]=Math.max(row[i],grid[i][j]);//9,4,8,7

                col[j]=Math.max(col[j],grid[i][j]);//8,7,9,3

            }

        }
        for(int i=0;i<size;i++){
                System.out.println(row[i]+" ");
            }
        for(int i=0;i<size;i++){
                System.out.println(col[i]+" ");
            }


        int sum=0;
        for(int i=0;i<size;i++){
            for(int j=0;j<size;j++){
                    sum=sum+Math.min(row[j],col[i])-grid[i][j];

            }
        }
        return sum;
    }

}
