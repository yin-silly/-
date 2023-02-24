#include<string>
#include<iostream>
#include<vector>

using namespace std;

int removeElement(vector<int>& nums, int val) {
	auto  i = nums.begin();
	while (i != nums.end()) {
		i = find(nums.begin(), nums.end(), val);
		if(i!=nums.end()) i = nums.erase(i);
	}
	return nums.size();
	
}

//int main() {
//
//	vector<int> a{ 1,2,3,2,4,5 };
//	cout << removeElement(a, 2) << endl;;
//	for (auto j : a) {
//		cout << j << endl;
//	}
//
//
//	return 0;
//}