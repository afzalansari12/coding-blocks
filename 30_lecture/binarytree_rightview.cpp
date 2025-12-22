

#include<iostream>
#include<queue>

using namespace std;

class TreeNode {
public:
	int val;
	TreeNode* left;
	TreeNode* right;

	TreeNode(int val) {
		this->val = val;
		this->left = this->right = nullptr;
	}
};

TreeNode* buildTree() {

	// 1. read the val of the root TreeNode
	int val;
	cin >> val;

	if (val == -1) {
		// construct an empty tree and return the pointer to its root
		return nullptr;
	}

	// 2. construct the root TreeNode
	TreeNode* root = new TreeNode(val);

	// 3. read the preOrder traversal of the leftSubtree & build the leftSubtree
	root->left = buildTree();

	// 4. read the preOrder traversal of the rightSubtree & build the rightSubtree
	root->right = buildTree();

	return root;

}

void rightView(TreeNode* root) {

	queue<TreeNode*> q;
	q.push(root);
	q.push(nullptr);

	while (!q.empty()) {
		TreeNode* front = q.front();
		q.pop();

		if (front == nullptr) {
		
			if (!q.empty()) {
				q.push(nullptr);
			}
		} else {
			// process the front node
            if(q.front() == nullptr){
			cout << front->val << " ";
            }
			if (front->left != nullptr) {
				q.push(front->left);
			}
			if (front->right !=nullptr) {
				q.push(front->right);
			}
		}
	}

}
int main() {

	TreeNode* root = buildTree();

	rightView(root);

	return 0;
}