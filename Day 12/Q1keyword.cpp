#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	vector<string> findWords(vector<string>& words) {
		string s1 = "qwertyuiop";
		string s2 = "asdfghjkl";
		string s3 = "zxcvbnm";
		
		int line[26];
		for(int i = 0; i<s1.size(); i++) line[s1[i] - 'a'] = 1;
		for(int i = 0; i<s2.size(); i++) line[s1[i] - 'a'] = 2;
		for(int i = 0; i<s3.size(); i++) line[s1[i] - 'a'] = 3;
		
		vector <string> res;

		for(int i = 0; i<words.size(); i++){
			int getLineNo = line[tolower(words[i][0]) - 'a'];
			bool flag = true;
			for(int j = 0; j<words[i].size(); j++){
				if(getLineNo != line[tolower(words[i][j]) - 'a']) {
					flag = false;
					break;
				}
			}

			if(flag){
				res.push_back(words[i]);
			}
		}

		return res;
	}	
};  
