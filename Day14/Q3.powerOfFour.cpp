#include <bits/stdc++.h>  
using namespace std;

class Solution {
public:
    bool isPowerOfFour(int n) {
//         using while loop
        if(n == 0)
            return 0;
        while(n != 1){
            if(n%4 != 0){
                return false;
            }
            n /= 4;
        }
        return true;
        
//         using popCount
        
        int c = __builtin_popcount(n-1);
        if(c%2 == 0) 
            return true;
        else
            return false;
    }
};