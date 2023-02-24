#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<functional>


using namespace std;
using std::placeholders::_1;

int searchInsert(vector<int>& nums, int target) {
	for (int i = 0; i < nums.size(); i++) {
		if (nums[i] < target) {
			continue;
		}
		if (nums[i] >= target) {
			return i;
		}
	}
	return nums.size();
}

//int main() {
//	vector<int>hah{1,2,3,4,5};
//	//int i;
//	
//	cout << searchInsert(hah, 0);
//	
//
//	return 0;
//}