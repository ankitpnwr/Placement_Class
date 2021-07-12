#include <bits/stdc++.h> 
 
using namespace std;
 
class Solution {
public:
    
    void rotate(vector<vector<int>>& mat){
        for(int i = 0; i<mat.size(); i++){
            for(int j = i; j<mat.size(); j++){
                swap(mat[j][i], mat[i][j]);
            }
        }
        for(int i =0; i<mat.size(); i++){
            reverse(mat[i].begin(), mat[i].end());
        }
    }
    
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int k = 4;
        while(k--){
            rotate(mat);
            if(mat == target)
                return true;
        }
    return false;
    }
};