#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

//struct TreeNode {
//	int key;
//	TreeNode* left;
//	TreeNode* right;
//};
//
//class BinarySearchTree {
//public:
//	void addNode(int key);
//	bool searchValue(int key);
//	void removeNode(int key);
//	void show();
//private:
//	TreeNode* root;
//	TreeNode* tail;
//
//	void inOrder(TreeNode* current) {
//		if (current != nullptr) {
//			inOrder(current->left);
//			cout << current->key << endl;
//			inOrder(current->right);
//		}
//	}
//
//	TreeNode* searchMaxNode(TreeNode* node) {
//		if (node == NULL) return NULL;
//		while (node->right != NULL) {
//			node = node->right;
//		}
//		return node;
//	}
//	TreeNode* removeSequence(TreeNode* node, int key);
//
//};
//using tree = TreeNode*;
//
//bool empty(tree root) {
//	return (root == nullptr);
//}
//
//int size(tree root) {
//	if (empty(root)) return 0;
//
//	return (size(root->left) + (size(root->right) + 1));
//}
//
//int height(tree root) {
//	if (empty(root)) return -1;
//
//	return max(height(root->left), height(root->right) + 1);
//}
//
//void BinarySearchTree::addNode(int key) {
//	TreeNode* node = new TreeNode();
//	TreeNode* tmpRoot = nullptr;
//
//	node->key = key;
//	if (root == nullptr) {
//		root = node;
//	}
//	else {
//		TreeNode* ptr = root;
//		while (ptr != nullptr) {
//			tmpRoot = ptr;
//			if (node->key < ptr->key) {
//				ptr = ptr->left;
//			}
//			else {
//				ptr = ptr->right;
//			}
//		}
//		if (node->key < tmpRoot->key)
//			tmpRoot->left = node;
//		else
//			tmpRoot->right = node;
//	}
//
//}
//
//TreeNode* BinarySearchTree::removeSequence(TreeNode* node, int key) {
//	if (node == nullptr) return node;
//	else if (node->key > key) {
//		node->left = removeSequence(node->left, key);
//	}
//	else if (node->key < key) {
//		node->right = removeSequence(node->right, key);
//	}
//	else {
//		TreeNode* ptr = node;
//		if (node->right == nullptr && node->left == nullptr) {
//			delete node;
//			node = nullptr;
//		}
//		else if (node->right == nullptr) {
//			node = node->left;
//			delete ptr;
//		}
//		else if (node->left == nullptr) {
//			node = node->right;
//			delete ptr;
//		}
//		else {
//			ptr = searchMaxNode(node->left);
//			node->key = ptr->key;
//			node->left = removeSequence(node->left, ptr->key);
//		}
//	}
//	return node;
//}
//
//void BinarySearchTree::removeNode(int key) {
//	TreeNode* ptr = root;
//	removeSequence(ptr, key);
//}
//
//bool BinarySearchTree::searchValue(int key) {
//	TreeNode* ptr = root;
//	TreeNode* tmpRoot = nullptr;
//	while (ptr != nullptr) {
//		if (ptr->key == key) {
//			cout << key << endl;
//			return true;
//		}
//		else if (ptr->key > key) {
//			ptr = ptr->left;
//		}
//		else
//			ptr = ptr->right;
//	}
//	cout << key << endl;
//	return false;
//}

int count = 1;
int depth;
vector<int> tree[10];

void insert(int *arr, int d, int start, int end) {
	if (::depth <= d) return;
	
	int mid = (start + end) / 2;

	tree[d].push_back(arr[mid]);

	insert(arr, d + 1, start, mid - 1);
	insert(arr, d + 1, mid + 1, end);
}

int main() {
	cin >> ::depth;

	int length = pow(2, ::depth) - 1;
	int* arr = new int[length];

	for (int i = 0; i < length; i++) {
		cin >> arr[i];
	}

	insert(arr, 0, 0, length);

	for (int i = 0; i < depth; i++) {
		for (int j = 0; j < tree[i].size(); j++) {
			cout << tree[i][j] << ' ';
		}
		cout << '\n';
	}

}