#include <bits/stdc++.h> 
 
using namespace std;
 
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //sort method:
        
//         sort(nums.begin(), nums.end());
//         int  n = nums.size()-1;
//         int i;
//         for( i = 0; i<n-1; i= i+2){
//             if(nums[i] == nums[i+1])
//                     contine;
//             else 
//                 return nums[i];
//         }
//         return nums[i];
        
//     effective method:
        int res = nums[0];
        for(int i = 1; i<nums.size(); i++){
            res ^= nums[i];
        }
        return res; 
    }
};