#include<iostream>
#include<vector>
#include<set>

using namespace std;
//一个长度为n-1的递增排序数组中的所有数字都是唯一的，并且每个数字都在范围0～n-1之内。
//在范围0～n-1内的n个数字中有且只有一个数字不在该数组中，请找出这个数字。
//笨方法，使用了一个vector放0-n的数
int missingNumber0(vector<int>& nums) {
	vector<int>com;
	for (int i = 0; i <= nums.size(); i++) com.push_back(i);
	for (int i = 0; i < nums.size();i++) {
		if (nums[i] != com[i])
			return com[i];
	}
	return com[com.size()-1];
}
//哈希
int missingNumber1(vector<int>& nums) {
	set<int> si(nums.begin(),nums.end());
	for (int i = 0; i <= nums.size(); i++) {
		if (si.find(i) == si.end())
			return i;
	}
	return 1;
	
}
//直接遍历
int missingNumber(vector<int>& nums) {
	for (int i = 0; i < nums.size(); i++) {
		if (nums[i] != i)
			return i;
	}
	return nums.size();

}
//int main() {
//	vector<int> vi{ 0,1 };
//	cout << missingNumber(vi);
//
//
//	return 0;
//}

