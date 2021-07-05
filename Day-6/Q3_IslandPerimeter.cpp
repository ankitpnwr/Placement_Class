#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    int islandPerimeter(vector<vector<int> >& grid) {
        int res = 0;
        int row = grid.size();
        int col = grid[0].size();
        for(int i = 0; i<row; i++){
            for(int j = 0; j<col; j++){
                if(grid[i][j] == 1){
                    res += 4;
                    if(i>0){
                        res -= grid[i-1][j];
                    }
                    if(i<row-1) {
                        res -= grid[i+1][j];
                    }
                    if(j>0){
                        res -=grid[i][j-1];
                    }
                    if(j<col-1){
                        res -=grid[i][j+1];
                    }
                }
            }
        }
        return res;
    }
};