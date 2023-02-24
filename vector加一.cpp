#include<iostream>
#include<vector>

using namespace std;

vector<int> plusOne(vector<int>& digits) {

	if (*digits.begin() == 0) return vector<int>() = { 1 };
	
	*digits.rbegin() += 1;
	int size = digits.size();
	for (int  i = size-1; i >=0; i--) {
		if (digits[i] == 10) {
			digits[i] -= 10;
			if (i==0) {
				digits.insert(digits.begin(), 1);
			}
			else  digits[i - 1] += 1;
		}
	}
	return digits;
	
}

//int main() {
//
//	vector<int> dq = { 1,9 };
//
//	
//	for (auto i : plusOne(dq)) {
//		cout << i << " ";
//	}
//	
//
//
//	return 0;
//}