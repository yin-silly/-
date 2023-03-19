#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<map>
#include<set>
#include<iomanip>

using namespace std;
/*给你一个整数 x ，如果 x 是一个回文整数，返回 true ；否则，返回 false 。
回文数是指正序（从左向右）和倒序（从右向左）读都是一样的整数。
例如，121 是回文，而 123 不是。*/

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