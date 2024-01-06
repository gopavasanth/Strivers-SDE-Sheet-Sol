// Question: https://leetcode.com/problems/pascals-triangle/

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        cout << numRows;
        vector <vector<int>> v;
        for (int i=0;i<numRows;i++){
            vector<int> l;
            for (int j=0;j<=i;j++){
                if (j==0 || j==i){
                    l.push_back(1);
                }
                else {
                    l.push_back(v[i-1][j-1] + v[i-1][j]);
                }
            }
            v.push_back(l);
        }
        return v;
    }
};