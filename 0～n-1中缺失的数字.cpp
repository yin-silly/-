#include<iostream>
#include<vector>
#include<set>

using namespace std;
//һ������Ϊn-1�ĵ������������е��������ֶ���Ψһ�ģ�����ÿ�����ֶ��ڷ�Χ0��n-1֮�ڡ�
//�ڷ�Χ0��n-1�ڵ�n������������ֻ��һ�����ֲ��ڸ������У����ҳ�������֡�
//��������ʹ����һ��vector��0-n����
int missingNumber0(vector<int>& nums) {
	vector<int>com;
	for (int i = 0; i <= nums.size(); i++) com.push_back(i);
	for (int i = 0; i < nums.size();i++) {
		if (nums[i] != com[i])
			return com[i];
	}
	return com[com.size()-1];
}
//��ϣ
int missingNumber1(vector<int>& nums) {
	set<int> si(nums.begin(),nums.end());
	for (int i = 0; i <= nums.size(); i++) {
		if (si.find(i) == si.end())
			return i;
	}
	return 1;
	
}
//ֱ�ӱ���
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

