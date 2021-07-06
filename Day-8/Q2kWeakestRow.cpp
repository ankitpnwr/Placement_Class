#include <bits/stdc++.h> 
using namespace std;
class Solution {
public:
     int binarySearch(int left, int right, vector<vector<int>>& a, int rn){
        int ans  = right;
        right = right-1;
        while(left <= right){
            int mid = left + (right-left)/2;
            
            if(a[rn][mid] == 0){
                ans = mid;
                right = mid -1;
            }else if(a[rn][mid] == 1){
                left = mid+1;
            }
        }
        return ans;
    }
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int> res;
        set<pair<int, int> > s;
        int row = mat.size();
        int col = mat[0].size();
        for(int i = 0; i<row; i++){
            int sum = binarySearch(0,col,mat, i);
            s.insert({sum,i});
        }
        for(auto it = begin(s); k>0; ++it, k--){
            res.push_back(it->second);
        }
        return res;
    }
};

