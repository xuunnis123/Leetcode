class Solution {
    public int[][] diagonalSort(int[][] mat) {
        int m = mat.length;
        int n= mat[m-1].length;
        int diagonal=(m<=n)?m:n;//3
        int[][] matted=new int[m][n];

        System.out.println(m+"|"+n);
        if(m>1 && n>1){
        //00 01 02 03
        int[] diagonalList=judgeDiagonal(m,n);
        int a=n-1;
        for(int j=0;j<n;j++){

            int gap=diagonalList[a--];
            System.out.println(gap);
            int[] checkArray=new int[gap];
            for(int k=0;k<gap;k++){

                     checkArray[k]=mat[0+k][j+k];

                }
            checkArray=sortByCheckArray(checkArray);

            for(int i=0;i<checkArray.length;i++){
                    matted[0+i][j+i]=checkArray[i];

                }



        }

        //00 10 20
        int b=n;
        for(int i=1;i<m;i++){
           // mat[i][0]
             int gap=diagonalList[b++];
            System.out.println("====");
            System.out.println(gap);
            int[] checkArray=new int[gap];
            for(int k=0;k<gap;k++){

                     checkArray[k]=mat[i+k][0+k];

                }
            checkArray=sortByCheckArray(checkArray);

            for(int u=0;u<checkArray.length;u++){
                    matted[i+u][0+u]=checkArray[u];

                }


        }
        }
        else{
            matted=mat;
        }
        return matted;
    }
    private int[] sortByCheckArray(int[] checkArray){



        for(int i=0;i<checkArray.length;i++){
            int[] tempArray=new int[checkArray.length];
            for(int j=0;j<checkArray.length-i;j++){

                if((j+1)==checkArray.length){
                    break;
                }
                else{
                    int thisNum=checkArray[j];

                    int thatNum=checkArray[j+1];

                    int temp=0;
                    if(thisNum>thatNum){
                        temp=thisNum;
                        thisNum=thatNum;
                        thatNum=temp;
                    }
                    checkArray[j]=thisNum;
                    checkArray[j+1]=thatNum;
                }


            }
        }


        return checkArray;
    }

   private int[] judgeDiagonal(int m,int n){
       int count=m+n-1;
       int[] diagonalList=new int[count];
       int min=(m>=n)?n:m;
       int sameCount=count-(min-1)*2;
       int descAscCount=(count-sameCount)/2;
       int savePoint=0;
       for(int i=0;i<descAscCount;i++){

           diagonalList[i]=i+1;
           savePoint++;

       }
       
       for(int i=0;i<sameCount;i++){
           diagonalList[savePoint]=min;
           savePoint++;
       }

       for(int i=descAscCount;i>0;i--){

           diagonalList[savePoint]=i;
           savePoint++;

       }
       for(int i=0;i<diagonalList.length;i++){
           System.out.println(diagonalList[i]);
       }
       System.out.println("_____");
       return diagonalList;
   }
}
