#include<iostream>
#include<string>

using namespace std;

string addStrings(string num1, string num2) {
	int sum = 0;
	int i = num1.size() - 1, j = num2.size() - 1;
	string s = "";
	while (i >= 0 || j >= 0 || sum != 0) {
		int x = i >= 0 ? num1[i] - '0' : 0;
		int y = j >= 0 ? num2[j] - '0' : 0;
		int result = x + y + sum;
		s.push_back('0'+result % 10);
		sum = result / 10;//�Ƿ��һ
		j--; i--;
	}
	reverse(s.begin(), s.end());
	return s;

}

int main() {

	string a = "1", b = "123";
	cout << addStrings(a, b);


	return 0;
}