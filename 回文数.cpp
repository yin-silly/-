#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<map>
#include<set>
#include<iomanip>

using namespace std;

bool isPalindrome(int x) {
	string s;
	if (x < 0 || (x % 10 == 0 && x != 0)) {
		return false;
	}
	else
	{
		 s = to_string(x);
	}
	//string s = to_string(x);
	if (s.size() == 0)return false;
	auto i = s.begin();
	auto j = s.rbegin();
	while ( i != s.end()) {
		
		if (*i != *j) {
			return false;
		}
		else {
			i++; j++;
		}
		
	}
	if (i == s.end()) return true;
	return 1;

}

//int main() {
//	int a = 101;
//	cout<<isPalindrome(a);
//
//
//	return 0;
//}