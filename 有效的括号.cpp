#include<iostream>
#include<string>
#include<stack>
#include<map>
#include<unordered_map>

using namespace std;

bool isValid(string s) {
	if (s.size() & 1) return 0;//奇数直接错误
	if (s.size() == 0) return 0;
	stack<char> dq;
	unordered_map<char, char> um{
		{')','('},
		{']','['},
		{'}','{'}
	};
	//不是奇数；栈的概念，先入后出
	for (auto i : s) {
		if (um.count(i)) {
			if (dq.empty()||dq.top() != um[i]) return 0;
			dq.pop();
		}
		else {
			dq.push(i);
		}
	}
	return dq.empty();
}

//int main() {
//	string s = "){";
//	cout<<isValid(s);
//
//	return 0;
//}