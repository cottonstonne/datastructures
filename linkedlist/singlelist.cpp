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
void insertatend(node* &head,int a){
	node* n=new node(a);
	node* t=head;
	while(t->next!=NULL){
		t=t->next;
	}
	t->next=n;
}
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
void show(node* head){
	cout << head->val;
	head=head->next;
	while(head!=NULL){
		cout << "->" << head->val;
		head=head->next;
	}
	cout << endl;
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
	return 0;
}
