#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> res;
        int c = 0;
        for(int i = 0;i<=n;i++){
            c = __builtin_popcount(i);
            res.push_back(c);
        }
        return res;
    }
};