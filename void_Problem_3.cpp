#include <iostream> 
#include<climits>

using namespace std;

struct Node {
	int data;
	Node* left, * right;
};


Node* getNode(int data)
{

	Node* temp = new Node;

	temp->data = data;
	temp->left = temp->right = NULL;
	return temp;
}

void helper(Node* root, int sum,
	int len, int& maxLen, int& maxSum)
{

	if (!root) {

		if (maxLen < len) {
			maxLen = len;
			maxSum = sum;
		}
		else if (maxLen == len && maxSum < sum)
			maxSum = sum;
		return;
	}


	helper(root->left, sum + root->data,
		len + 1, maxLen, maxSum);

	helper(root->right, sum + root->data,
		len + 1, maxLen, maxSum);
}

int maxPathSum(Node* root)
{

	if (!root)
		return 0;

	int maxSum = INT_MIN, maxLen = 0;
	helper(root, 0, 0, maxLen, maxSum);

	return maxSum + 1;
}


int main()
{

	Node* root = getNode(-10);


	root->right = getNode(9);

	root->right->right = getNode(20);
	root->right->right->left = getNode(15);
	root->right->right->left->left = getNode(7);

	cout << "Sum = "
		<< maxPathSum(root);

	return 0;
}