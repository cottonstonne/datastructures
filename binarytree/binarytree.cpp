#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
	public:
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x){
		val=x;
		left=NULL;
		right=NULL;
	}
};
void inorder(TreeNode *root){
	if(root==NULL) return;
	inorder(root->left);
	cout << root->val << endl;
	inorder(root->right);
}
int main(){
	TreeNode *root=new TreeNode(0);
	TreeNode *node=new TreeNode(1);
	TreeNode *node1=new TreeNode(2);
	root->left=node;
	root->right=node1;
	inorder(root);
	return 0;
}
