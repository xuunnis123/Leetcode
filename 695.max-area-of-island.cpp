/*
 * @lc app=leetcode id=695 lang=cpp
 *
 * [695] Max Area of Island
 */

// @lc code=start
class Solution {
public:
    int calculate(vector<vector<int>>& grid, int i, int j,int buffer,int row,int col){
        
        int buffer_now = buffer;
        cout<<"i="<<i<<";j="<<j<<endl;
        
        //up
        if((i-1)>=0 && grid[i-1][j]== 1){
            cout <<"up" <<endl;
            grid[i][j]=0;
            buffer_now+=1;
            buffer=calculate(grid, i-1, j, buffer_now, row, col);
            cout<<"buffer="<<buffer<<endl;
        }
        //down
        if((i+1)<row &&grid[i+1][j]== 1){
            cout <<"down" <<endl;
            grid[i][j]=0;
            buffer_now+=1;
            buffer=calculate(grid, i+1, j, buffer_now, row, col);
            cout<<"buffer="<<buffer<<endl;
        }
        //left
        if((j-1)>=0 &&grid[i][j-1]== 1){
            cout <<"left" <<endl;
            grid[i][j]=0;
            buffer_now+=1;
            buffer=calculate(grid, i, j-1, buffer_now, row, col);
            cout<<"buffer="<<buffer<<endl;
        }
        //right
        if((j+1)<col &&grid[i][j+1]== 1){
            cout <<"right" <<endl;
            grid[i][j]=0;
            buffer_now+=1;
            buffer=calculate(grid, i, j+1, buffer_now, row, col);
            cout<<"buffer="<<buffer<<endl;
        }
        cout<<"end sub\n";
        cout<<"grid["<<i<<"]["<<j<<"]="<<grid[i][j]<<"\n";
        grid[i][j]=0;
        return buffer;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int res = 0;
        int max = 0;
        int buffer = 0;
        int row = grid.size();
        int col = grid[0].size();

        for(int i = 0; i< row; i++ ){
            for(int j=0;j<col;j++){
                if(grid[i][j]==1){
                    buffer = 1;
                    buffer = calculate(grid,i,j,buffer,row,col);
                    cout<<"final_buffer="<<buffer<<endl;
                    if(buffer>max){  
                        max=buffer;
                        
                    }
                }
            }

        }
        //[[1,1,0,0,0],[1,1,0,0,0],[0,0,0,1,1],[0,0,0,1,1]]\n
        //[[0,1,1],[1,1,0]]\n
        return max;
    }
};
// @lc code=end

            
