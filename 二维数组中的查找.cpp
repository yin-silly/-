#include<iostream>
#include<vector>

using namespace std;

bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
	if (matrix.size() == 0)return 0;
//先遍历第一个数组，遇到大于tar的，按列，列再遇到大于tar的，回溯该行。
	int cow = 0;
		for (auto j = 0; j < matrix.begin()->size(); j++) {
			if (matrix[0][j] == target) return true;
			if (matrix[0][j] > target) {
				cow = j-1;
				break;
			}
			else cow = matrix.begin()->size() - 1;
		}
		for (auto i = 1; i < matrix.size()&&cow>=0; i++) {
			if (matrix[i][cow] == target) return true;
			if (matrix[i][cow] > target){
				for (auto j0 = i, j1 = 0; j1 < cow; j1++) {
					if (matrix[j0][j1] == target) { return 1; }
				}
				//return 0;
			}
		}
		return 0;
}

//int main() {
//	vector<vector<int>> matrix { {1,   2,  3, 4, 5},
//								 {6,   7,  8, 9, 10},
//								 {11,   12,  13, 14, 15},
//								 {16, 17, 18, 19, 20},
//								 {21, 22, 23, 24, 25} };
//	matrix = { {2,5},{2,8},{7,9},{7,11},{9,11} };
//	cout << findNumberIn2DArray(matrix, 7);
//
//
//	return 0;
//}