#include <bits/stdc++.h> 
using namespace std;
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int row = image.size();
        int col = image[0].size();
        
        for(int i = 0; i<row; i++){
            reverse(image[i].begin(), image[i].end());
            for(int j = 0; j<col; j++){
                image[i][j] = 1 ^ image[i][j];
            }
        }
        return image;
    }
};