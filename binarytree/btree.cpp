#include<bits/stdc++.h>
using namespace std;

struct node{
	int val;
	node* left;
	node* right;
	node(int a){
		val=a;
		left=NULL;
		right=NULL;
	}
};
//insertions
void insertroot(node* &root,int a){
	node* n=new node(a);
	if(root==NULL){
		root=n;
	}
	else{
		cout << "root already exits" << endl;
	}
}
void insertdul(node* root,int a){
	node* t=root;
	node* n=new node(a);
	while(t!=NULL){
		if(a < t->val){
			if(t->left==NULL){
				t->left=n;
				break;
			}
			else{
				t=t->left;
			}
		}
		else if(a > t->val){
			if(t->right==NULL){
				t->right=n;
				break;
			}
			else{
				t=t->right;
			}
		}
		else{
			if(t->right==NULL){
				t->right=n;
			}
			else if(t->left==NULL){
				t->left=n;
			}
			break;
		}
	}
}
void insert(node* root,int a){
	node* t=root;
	node* n=new node(a);
	while(t!=NULL){
		if(a < t->val){
			if(t->left==NULL){
				t->left=n;
				break;
			}
			else{
				t=t->left;
			}
		}
		else if(a > t->val){
			if(t->right==NULL){
				t->right=n;
				break;
			}
			else{
				t=t->right;
			}
		}
		else{
			cout << a << " already exists" << endl;
			break;
		}
	}
}
//print tree
void preorder(node* root){
	node* t=root;
	cout << t->val << " ";
	if(t->left!=NULL)
		preorder(t->left);
	if(t->right!=NULL)
		preorder(t->right);
}
void postorder(node* root){
	node* t=root;
	if(t->left!=NULL)
		postorder(t->left);
	if(t->right!=NULL)
		postorder(t->right);
	cout << t->val << " ";
}
void inorder(node* root){
	node* t=root;
	if(t->left!=NULL)
		inorder(t->left);
	cout << t->val << " ";
	if(t->right!=NULL)
		inorder(t->right);
}
//sum of all elements
int addall(node* t){
	if(t==NULL){
		return 0;
	}
	return t->val+(addall(t->left)+addall(t->right));
}
//size of tree
//->count total number of nodes
int fsize(node* t){
	if(t==NULL){
		return 0;
	}
	return 1+(fsize(t->left)+fsize(t->right));
}
//implement level order using stack/queue

//implement reverse level order stack/queue

//all root to leaf paths
int main(){
	node* root;
	insertroot(root,1);
	insert(root,2);
	insert(root,4);
	insert(root,5);
	insert(root,3);
	insert(root,6);
	insert(root,7);
	insertdul(root,7);
	cout << "preorder :";
	preorder(root);
	cout << endl;
	cout << "postorder:";
	postorder(root);
	cout << endl;
	cout << "inorder  :";
	inorder(root);
	cout << endl;
	cout << "total sum:";
	cout << addall(root) << endl;;
	cout << "tree size:";
	cout << fsize(root) << endl;
	return 0;
}
