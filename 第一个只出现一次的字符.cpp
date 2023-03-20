#include<iostream>
#include<vector>
#include<string>
#include<map>

using namespace std;
//���ַ��� s ���ҳ���һ��ֻ����һ�ε��ַ���
//���û�У�����һ�����ո� s ֻ����Сд��ĸ��
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