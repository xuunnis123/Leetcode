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
        cout<<"i="<<i<<";j="<<j<<endl;
        
        if(i<0 || j<0 || i >= row || j>= col || grid[i][j] == 0 || mark[i][j] == true) return 0;

        if(mark[i][j] == false){
            cout<<"into mark false\n";
            mark[i][j] = true;
            cout<<"mark["<<i<<"]["<<j<<"]="<<mark[i][j]<<"\n";
        }

        if(grid[i][j] == 0) return 0;

        int c_buffer = 1;
        cout<<"initial c_buffer="<<c_buffer<<endl;
        //up
        if((i-1)>=0 && grid[i-1][j] == 1 && mark[i-1][j] == false){
            cout <<"up" <<endl;
            cout<<"before buf_up="<<buf_up<<"" <<endl;
            buf_up = calculate(grid, i-1, j, row, col);
            cout<<"after buf_up="<<buf_up<<"" <<endl;
            //cout<<"buffer="<<buffer<<endl;
        }
        //down
        if((i+1)<row && grid[i+1][j] == 1 && mark[i+1][j] == false){
            cout <<"down" <<endl;
            
            cout<<"before buf_down="<<buf_down<<"" <<endl;
            buf_down = calculate(grid, i+1, j, row, col);
            cout<<"after buf_down="<<buf_down<<"" <<endl;
            //cout<<"buffer="<<buffer<<endl;
        }
        //left
        if((j-1)>=0 && grid[i][j-1] == 1 && mark[i][j-1] == false){
            cout <<"left" <<endl;
           
            cout<<"before bufbuf_left_up="<<buf_left<<"" <<endl;
            buf_left = calculate(grid, i, j-1, row, col);
            cout<<"after buf_left="<<buf_left<<"" <<endl;
            //cout<<"buffer="<<buffer<<endl;
        }
        //right
        if((j+1)<col && grid[i][j+1] == 1 && mark[i][j+1] == false){
            cout <<"right" <<endl;
            
            cout<<"before buf_right="<<buf_right<<"" <<endl;
            buf_right = calculate(grid, i, j+1, row, col);
            cout<<"after buf_right="<<buf_right<<"" <<endl;
            //cout<<"buffer="<<buffer<<endl;
        }
        cout<<buf_up <<"|"<< buf_down <<"|"<< buf_left <<"|"<< buf_right <<"\n";
        
        c_buffer = c_buffer+ buf_up + buf_down + buf_left + buf_right;
        cout<<"end c_buffer="<<c_buffer<<endl;
  
       
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

            
