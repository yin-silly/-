#include<iostream>
#include<string>


using namespace std;
//�ַ���������ת�����ǰ��ַ���ǰ������ɸ��ַ�ת�Ƶ��ַ�����β����
//�붨��һ������ʵ���ַ�������ת�����Ĺ��ܡ����磬�����ַ���"abcdefg"������2���ú�������������ת��λ�õ��Ľ��"cdefgab"��

 
string reverseLeftWords(string s, int n) {
	string sub = s.substr(0, n);
	s.erase(0, n);
	s = s + sub;
	return s;
}

//int main() {
//	string s = "lrloseumgh";
//	int n = 6;
//	cout << reverseLeftWords(s, n);
//
//	return 0;
//}