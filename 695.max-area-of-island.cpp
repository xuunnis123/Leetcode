/*
 * @lc app=leetcode id=695 lang=cpp
 *
 * [695] Max Area of Island
 */

// @lc code=start
class Solution {
public:
    vector<vector<bool>> mark;
    
    int calculate(vector<vector<int>>& grid, int i, int j, int row,int col){
        
        int buf_up, buf_down, buf_left, buf_right = 0;
       
        if(i<0 || j<0 || i >= row || j>= col || grid[i][j] == 0 || mark[i][j] == true) return 0;

        if(mark[i][j] == false){
            mark[i][j] = true;
        }
        int c_buffer = 1;
       
        //up
            buf_up = calculate(grid, i-1, j, row, col);
        //down
            buf_down = calculate(grid, i+1, j, row, col);   
        //left
            buf_left = calculate(grid, i, j-1, row, col);
        //right
            buf_right = calculate(grid, i, j+1, row, col);
        
        c_buffer += buf_up + buf_down + buf_left + buf_right;
       
        return c_buffer;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int res = 0;
        int max = 0;
        int buffer = 0;
        int row = grid.size();
        int col = grid[0].size();
        vector<vector<bool>> save(row, vector<bool>(col,false));
        mark = save;
        for(int i = 0; i< row; i++ ){
            for(int j=0;j<col;j++){
                if(grid[i][j]==1){
                    
                    buffer = calculate(grid,i,j,row,col);
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

            
