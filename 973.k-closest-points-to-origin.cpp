class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        vector<vector<int>> result;
        vector<int> itemSet;
        vector<int> itemKey;
        multimap<int,int> calResult;
        for(int i=0;i<points.size();i++){
           typedef pair <int, int> Int_Pair;
           calResult.insert(Int_Pair(points[i][0]*points[i][0]+points[i][1]*points[i][1],i));
        //itemSet.push_back(points[i][0]*points[i][0]+points[i][1]*points[i][1]);
               
        }
         for(multimap<int,int>::iterator it = calResult.begin(); it != calResult.end(),K>0; ++it,K--){
             std::cout << it->first <<"it="<<it->second<< endl;
             result.push_back(points[it->second]);
         }
         return result;
       }
   };
