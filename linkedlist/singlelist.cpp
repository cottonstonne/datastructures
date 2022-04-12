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
	return;
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
void show(node* head){
	while(head!=NULL){
		cout << head->val << endl;
		head=head->next;
	}
}
int main(){
	node* head=NULL;
	insertstart(head,1);
	insertstart(head,0);
	insertatend(head,2);
	insertat(head,8,4);
	show(head);
	return 0;
}
