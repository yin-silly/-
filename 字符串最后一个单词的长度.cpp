#include<string>
#include<iostream>
#include<vector>
#include<sstream>

using namespace std;

int lengthOfLastWord(string s) {
	stringstream str(s);
	int ans = 0;
	string s1;
	while (str>>s1) {
		ans = s1.size();
	}
	return ans;
}

//int main() {
//	string s = "hello wordjh uhuhuuuu";
//	cout << lengthOfLastWord(s);
//
//	return 0;
//}