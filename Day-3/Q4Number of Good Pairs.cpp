#include <bits/stdc++.h> 
using namespace std;
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        //Method 1: O(n^2) and O(1)
        // int count = 0;
        // for(int i = 0; i<nums.size()-1; i++){
        //     for(int j = i+1; j<nums.size(); j++){
        //         if(nums[i] == nums[j]){
        //             count++;
        //         }
        //     }
        // }
        // return count;
        
        // Method 2: O(n) and O(n)
        unordered_map<int, int> table;
        int c = 0;
        for(int i = 0; i<nums.size(); i++){
            c += table[nums[i]];
            table[nums[i]]++;
        }
        return c;
    }
};