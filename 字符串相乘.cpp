#include<iostream>
#include<string>
#include<vector>
#include<numeric>

using namespace std;

string addStrings(string num1, string num2) {
	int add = 0;
	int i = num1.size() - 1, j = num2.size() - 1;
	string s ;
	while (i >= 0 || j >= 0 || add != 0) {
		int x = i >= 0 ? num1[i] - '0' : 0;
		int y = j >= 0 ? num2[j] - '0' : 0;
		int result = x + y + add;
		s.push_back('0' + result % 10);
		add = result / 10;//ÊÇ·ñ½øÒ»
		j--; i--;
	}
	reverse(s.begin(), s.end());
	return s;

}

string multiply(string &num1, string &num2) {
	if (num1 == "0" || num2 == "0") { return "0"; }
	int n = num1.size(), m = num2.size();
	string vs="0";
	for (int i = n - 1; i >= 0; i--) {
		int add = 0;//²¹0
		string dq;
		for (int j = n - 1-i; j > 0;j--) {
			dq.push_back('0');
		}
		int x = num1.at(i) - '0';
		for (int j = m - 1; j >= 0;j-- ) {
			int y = num2.at(j) - '0';
			int result = x * y + add;
			dq.push_back('0'+result % 10);
			add = result / 10;
		}
		while (add != 0) {
			dq.push_back('0'+add % 10);
			add /= 10;
		}
		reverse(dq.begin(), dq.end());
		
		vs = addStrings(vs, dq);
	}
	return vs;
}

int main() {

	string s1 = "9333852702227987", s2 = "85731737104263";
	cout << multiply(s1, s2) << endl;



	return 0;
}