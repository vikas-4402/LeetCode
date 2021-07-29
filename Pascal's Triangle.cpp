class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector <vector <int>> ans(numRows);
        
        for(int i=0;i<numRows;i++){
            int c=1;ans[i].push_back(c);
            for(int j=1;j<=i;j++){
                c = (c*(i+1-j))/j;
                ans[i].push_back(c);
            }
        }
        return ans;
    }
};