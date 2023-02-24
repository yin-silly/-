#include<iostream>
#include<string>
#include<stack>
#include<map>
#include<unordered_map>

using namespace std;

bool isValid(string s) {
	if (s.size() & 1) return 0;//����ֱ�Ӵ���
	if (s.size() == 0) return 0;
	stack<char> dq;
	unordered_map<char, char> um{
		{')','('},
		{']','['},
		{'}','{'}
	};
	//����������ջ�ĸ��������
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