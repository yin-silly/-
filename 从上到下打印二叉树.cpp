#include<iostream>
#include<string>
#include<vector>
#include<queue>

using namespace std;

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
	
};

//从上到下打印出二叉树的每个节点，同一层的节点按照从左到右的顺序打印。
//队列 先进先出
vector<int> levelOrder(TreeNode* root) {
	vector<int>vi;
	if (root == nullptr) return vi;
	queue<TreeNode* > qt;
	qt.push(root);
	while (qt.size()) {
		TreeNode* node = qt.front();
		vi.push_back( qt.front()->val);
		qt.pop();
		if (node->left) {
			qt.push(node->left);
		}
		if (node->right) {
			qt.push(node->right);
		}
	}
	return vi;
}

//int main() {
//	TreeNode* node = new TreeNode(1);
//	TreeNode* node1 = new TreeNode(3);
//	TreeNode* node2 = new TreeNode(5);
//	node->left = node1;
//	node->right = node2;
//
//	vector<int>vi=levelOrder(node);
//	for (auto i : vi) {
//		cout << i << " ";
//	}
//
//	delete node, node1, node2;
//	return 0;
//}