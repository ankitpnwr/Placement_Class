#include <bits/stdc++.h> 
using namespace std;

int convertToBase(int n, int b){

    int res;
    int p = 1;
    
    while(n>0){
      int dig  = n % b;
      n = n / b;
      res += dig *p;
      p = p * b;
    }
    
    return res;
}

int main()
{
 
    int n, b;
    cin >> n >> b;
    if(n != 0){
        cout << convertToBase(n,b);
    }
    else{
        cout << "n should be more than 0" << endl;
    }
    
    return 0;
}