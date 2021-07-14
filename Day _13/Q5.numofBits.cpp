#include <bits/stdc++.h> 
using namespace std;
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int c = 0;
        int f =1;
        while(n>0){
            if((f&n) != 0) c++;
            n = n>> 1;
                  
        }
        return c;
    }
};