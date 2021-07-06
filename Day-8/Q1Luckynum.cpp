#include <bits/stdc++.h> 
using namespace std;
class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int> >& matrix) {
        vector<int> res;
        int row = matrix.size();
        int col = matrix[0].size();

        for(int i = 0; i<row; i++){
            int minE = 1000007;
            int maxE = 0;
            int k = 0;
            for(int j = 0; j<col; j++){
                if(matrix[i][j] < minE){
                    minE = matrix[i][j];
                    k = j;
                }
            }   
            for(int j = 0; j <row; j++){
                if(matrix[j][k] > maxE){
                    maxE = matrix[j][k];
                }
            }
            if(minE == maxE){
                res.push_back(minE);
            }
        }
        return res;
    }
};