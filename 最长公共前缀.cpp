#include<iostream>
#include<list>
#include<string>
#include<vector>
#include<algorithm>
#include<functional>
#include<utility>

using namespace std;

string longestCommonPrefix(vector<string>& s) {

	if (s.size() == 1) return *s.begin();
	if (s.size() < 2) return "";
	//string f;
	
	/*sort(s.begin(), s.end(),
		[](string d, string q) {return d.size() < q.size(); });*/
	string f;
	for (int j = 0; j < s[0].size(); j++) {
		for (int i = 1; i < s.size(); i++) {
			if (s[i].size() >= j+1) {
				if (s[i][j] != s[0][j]) {

					if (j == 0)return "";
					else {
						string p(s[0], 0, j );
						f = p;
						return f;
					}
				}
			}
			else
			{
				return s[i];
			}
		}
		if (j == s[0].size() - 1) return s[0];
	}
	return f;
}


//int main() {
//	vector<string> strs;
//	strs.push_back("flowers");
//	strs.push_back("flowers");
////	strs.push_back("flight");
//	//strs.push_back("foo");
//
//
//	cout << longestCommonPrefix(strs);
//	/*for (auto i : strs) {
//		cout << i << " ";
//	}*/
//}