#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // using sort and search
        int n = nums.size();
        
        sort(nums.begin(), nums.end());
        if(n != nums[n-1]) return n;
        
        for(int i = 0; i<nums.size(); i++){
            if(i != nums[i]) return i;
        }
        return -1;
        
        // using set
        set<int> s;
        for(auto x: nums){
            s.insert(x);
        }
        while(n>=0){
            if(s.find(n) == s.end())
                return n;
            n--;
        }
        return -1;
        
        // using formula
        int sum = (n*(n+1))/2;
        int sumOfArray = 0;
        for(int i = 0; i<n; i++){
            sumOfArray += nums[i];
        }
        return sum - sumOfArray;
    }
};