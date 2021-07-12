#include <bits/stdc++.h> 
 
using namespace std;

class Solution {
public:
    
    string commonString(string temp, string s){
        int m = min(temp.size(), s.size());
        int i = 0;
        for(; i<m; i++){
            if(temp.at(i) != s.at(i)){
                break;
            }
        }
        temp = temp.substr(0,i);
        return temp;
    }
    
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        string temp = "";
        temp = strs[0];
        for(int i = 1; i<n; i++){
            temp = commonString(temp, strs[i]);
        }
        return temp;
    }
};