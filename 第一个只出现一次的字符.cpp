#include<iostream>
#include<vector>
#include<string>
#include<map>

using namespace std;
//在字符串 s 中找出第一个只出现一次的字符。
//如果没有，返回一个单空格。 s 只包含小写字母。
char firstUniqChar(string s) {
	if (s.size() == 0)return ' ';
	map<char, int>mc;
	for (auto i : s) {
		if (mc.find(i) == mc.end()) { mc[i] = 1; }
		else { mc[i]++; }
	}
	for (auto i : s) {
		if (mc[i] == 1) return i;
	}
	return ' ';
}

int main() {
	string s = "abaccdeff";
	cout<<firstUniqChar(s);

	return 0;
}