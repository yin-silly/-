#include<iostream>
#include<vector>

using namespace std;
//统计一个数字在排序数组中出现的次数。
//int search(vector<int>& nums, int target) {
//	int count = 0;
//	for (auto i = nums.begin(); i != nums.end(); i++) {
//		if (i < nums.end() - 1 && *i<target && *(i + 1)>target) return 0;
//		if (*i == target) {
//			count++; continue;
//		}
//		if (*i > target)break;
//	}
//	return count;
//}
//二分法
int binarySearch(vector<int>& nums, int target, bool lower) {
	int left = 0, right = nums.size() - 1, ans = nums.size();
	while (left <= right) {
		int mid = (left+right)/ 2;
		if (nums[mid] > target|| lower && nums[mid] >= target) {
			right = mid-1;
			ans = mid;
		}
		else {
			left = mid+1;
			
		}
		//if (left == right) ans = right;
	}
	return ans;
}

int search(vector<int>& nums, int target) {
	int leftIdx = binarySearch(nums, target, 1);
	int rightIdx = binarySearch(nums, target, 0);
	if (leftIdx == rightIdx) return 0;
	else return rightIdx - leftIdx;

	
	return 1;
}
//int main() {
//	vector<int> nums{ 5,7,7,8,8,10 };
//	int target = 7;
//	cout << search(nums, target);
//	//cout << binarySearch(nums, 7, 1);
//
//	return 0;
//}