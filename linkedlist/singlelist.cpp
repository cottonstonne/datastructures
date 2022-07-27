#include<iostream>
using namespace std;

class node{
	public:
	int val;
	node* next;
	node(int a){
		val=a;
		next=NULL;
	}
};
//print whole linked list
void show(node* head){
	cout << head->val;
	head=head->next;
	while(head!=NULL){
		cout << "->" << head->val;
		head=head->next;
	}
	cout << endl;
}
//insertion operations in linked list
void insertstart(node* &head,int a){//try removing & from head,(reference and value)
	node* n=new node(a);
	if(head==NULL){
		head=n;
	}
	else{
		n->next=head;
		head=n;
	}
}
void insertatend(node* &head,int a){
	node* n=new node(a);
	node* t=head;
	while(t->next!=NULL){
		t=t->next;
	}
	t->next=n;
}
void insertat(node* &head,int a,int p){
	if(p==0){
		insertstart(head,a);
	}
	node* n=new node(a);
	node* t=head;
	for(int i=0;i<p-1;i++){
		t=t->next;
		if(t->next==NULL)//avoid out-of-bound
			break;
	}
	n->next=t->next;
	t->next=n;
}
//deletion operation in linked list
void deletestart(node* &head){
	head=head->next;
}
void deleteat(node* &head,int a){
	if(head->val==a){
		deletestart(head);
		return;
	}
	node* t=head;
	while(t->next->val!=a){
		t=t->next;
	}
	t->next=t->next->next;
}
//reverse all node of linked list
void reverse(node* &head){ //learn using recursion
	node* pre=NULL;
	node* cur=head;
	node* next=head->next;
	while(cur!=NULL){
		next=cur->next;
		cur->next=pre;

		pre=cur;
		cur=next;
	}
	head=pre;
}
int main(){
	node* head=NULL;
	insertstart(head,1);
	insertstart(head,0);
	insertatend(head,2);
	insertat(head,8,4);
	show(head);
	deleteat(head,1);
	show(head);
	deletestart(head);
	show(head);
	insertstart(head,0);
	show(head);
	deleteat(head,0);
	show(head);
	insertat(head,1,1);
	insertat(head,2,2);
	insertat(head,3,3);
	insertstart(head,0);
	show(head);
	reverse(head);
	show(head);
	return 0;
}
