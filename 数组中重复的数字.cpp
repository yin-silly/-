#include<iostream>
#include<vector>
#include<set>

using namespace std;
//�������ظ������֣����
int findRepeatNumber(vector<int>& nums) {
	set<int> si;
	for (auto &i : nums) {
		if (si.find(i) != si.end()) {
			return i;
		}
		else {
			si.insert(i);
		}
	}
	return 1;
}

//int main() {
//	vector<int> vi{ 1,2,3,4,5,6,5 };
//	cout << findRepeatNumber(vi);//���5
//
//
//	return 0;
//}