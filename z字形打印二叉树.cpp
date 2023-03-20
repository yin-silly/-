#include<iostream>
#include<string>
#include<vector>
#include<queue>
#include<algorithm>


using namespace std;

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}

};

vector< vector<int>> levelOrder(TreeNode* root) {
	vector<vector<int>> vvi;
	if (root == nullptr) return vvi;
	

	queue<TreeNode*> qt;
	qt.push(root);
	while (qt.size()) {
		//rev++;
		vvi.push_back(vector<int>());
		int qtsize = qt.size();
		for (int i = 1; i <= qtsize; ++i) {
			TreeNode* node = qt.front(); qt.pop();
			vvi.back().push_back(node->val);
			if (node->left) {
				qt.push(node->left);
			}
			if (node->right) {
				qt.push(node->right);
			}
		}

	}
	//int rev = 0;
	for (int i = 0; i < vvi.size();i++) {
		if(i&1){
			reverse(vvi[i].begin(), vvi[i].end());
			//rev++;
		}
		
	}
	//reverse(vvi[1].begin(), vvi[1].end());
	return vvi;
}

int main() {
	
	TreeNode* node = new TreeNode(1);
	TreeNode* node1 = new TreeNode(3);
	TreeNode* node2 = new TreeNode(5);
	node->left = node1;
	node->right = node2;

	vector<vector<int>>vi=levelOrder(node);
	for (auto& i : vi) {
		for (auto j : i) {
			cout << j << " ";
		}
		cout << endl;
	}

	delete node, node1, node2;
	return 0;
}
	


