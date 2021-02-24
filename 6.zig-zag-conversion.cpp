/*
 * @lc app=leetcode id=6 lang=cpp
 *
 * [6] ZigZag Conversion
 */

// @lc code=start
class Solution {
public:
    string convert(string s, int numRows) {
        string result;
        string top,bottom,middle;
        int gap=numRows-2;
        int loop= numRows+gap;
        int size= s.size();
        int interval = 2*numRows-2;
        
        // top and bottom
        
        if(numRows==1 || size==1|| numRows>=size){
            return s;
        }
        else{
            for(int i=0;i<size;i=i+numRows*2-2){
                top+=s[i];
                
                if((i+numRows)<=size){
                    
                    bottom+=s[i+numRows-1];
                    
                }
            

            }
            if(numRows>2){
            //中間有公式： interval-2*i,2*i,interval-2*i,2*i,...
                for(int j=1;j<numRows-1;j++){
                    int k=j;
                    
                    middle+=s[k];
                    //int i=1;
                    while(k<size){
                        
                        
                        k=k+interval-2*j;
                    
                        if(k<size)
                        {
                        
                        middle+=s[k];
                        
                        k=k+2*j;
                        
                            if(k<size){
                                middle+=s[k];
                                
                                
                            
                            }
                            
                        }
                        //i++;
                    }
                    //cout<<"middle1="<<middle<<"\n";
                }
            }    
            result=top+middle+bottom;
        
            return result;
        }
    }
};
// @lc code=end

