#include <bits/stdc++.h> 
 
using namespace std;

class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        bool flag = true;
        for(int i = 0; i<row; i++){
            for(int j = 0; j<col; j++){
                int temp = matrix[i][j];
                if(i>0 && j>0  && matrix[i-1][j-1] != temp){
                    flag = false;
                }
            }
        }
        return flag;
    }
};

