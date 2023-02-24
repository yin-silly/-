#include<iostream>
#include<string>
#include<math.h>

using namespace std;

int reverse(int x) {
	
	string s = to_string(abs(x)),d;
	string j = to_string(int(pow(2, 31) - 1));
	for (auto i = s.rbegin(); i != s.rend(); i++) {
		d += *i;
	}
	if (d.size() > j.size()) return 0;
	else if (d.size() == j.size()) {
		if (d > j)return 0;
	}
	 int q = stoi(d);
	//if (x > pow(2, 31) - 1) return 0;
	if (x < 0)return -q;
	return q;
}

//int main() {
//
//	int x = -2147483412;
//	cout << reverse(x);
//
//	return 0;
//};