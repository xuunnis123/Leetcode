/*
 * @lc app=leetcode id=207 lang=cpp
 *
 * [207] Course Schedule
 */

// @lc code=start
class Solution {
public:
    
    bool doDFS(vector<vector<int>>& graph,vector<int>& visit,int i){
        //0:non-visit ; 1:visited ; -1:visiting
        
        if (visit[i] == -1) return false;
        if (visit[i] == 1) return true;
        // 0 and -1 situation
        visit[i] = -1;
        
        for (auto a : graph[i]) {
            
            // if existed visited return false cause having cycle
            if (!doDFS(graph, visit, a)) return false;
        }
        visit[i] = 1;
        return true;
        
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        bool result = true;
        vector<vector<int>> graph(numCourses, vector<int>());
        vector<int> visit(numCourses);
        
        for(auto find:prerequisites){
           
            graph[find[1]].push_back(find[0]);

        }
        //cout<<"graph[0][0]="<<graph[0][0]<<"\n";
        
        for (int i = 0; i < numCourses; ++i) {
            if (!doDFS(graph, visit, i)) return false;
        }
        
        

        return result;
    }
};
// @lc code=end

