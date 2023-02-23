#include<vector>
#include<iostream>

using namespace std;

void rotate(vector<vector<int>>& matrix) {
	int width = matrix.size()-1;
	//vector<vector<int>>matrix1(matrix);
	for (int i = 0; i <= width/2;i++) {//上下翻转
		for (int j = 0; j <= width; j++) {
			swap(matrix[i][j], matrix[width - i][j]);
		}
	}
	for (int i = 0; i <= width ; i++) {//对角线翻转
		for (int j = i; j <= width; j++) {
			swap(matrix[i][j], matrix[j][i]);
		}
	}
	
}

//int main() {
//
//	vector<vector<int>> matrix = { {1, 2, 3} ,{4, 5, 6},{7, 8, 9} };
//	rotate(matrix);
//	for (auto& i : matrix) {
//		for (auto &j : i) {
//			cout << j << " ";
//		}
//		cout << endl;
//	}
//
//
//	return 0;
//}