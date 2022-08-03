#include<bits/stdc++.h>
using namespace std;
struct node{
	int val;
	node* next;
	node* prev;
	node(int a){
		val=a;
		next=NULL;
		prev=NULL;
	}
};
//insertions
void insertAtStart(node* &head,node* &tail,int a){
	node* n=new node(a);
	if(head==NULL){
		head=tail=n;
	}
	else{
		n->val=a;
		head->prev=n;
		n->next=head;
		head=n;
	}
}
void insertAtEnd(node* &head,node* &tail,int a){
	node* n=new node(a);
	if(head==NULL){
		head=tail=n;
	}
	else{
		tail->next=n;
		n->prev=tail;
		tail=n;
	}
}
//deletions
void deleteAtEnd(node* &tail){
	tail=tail->prev;
	tail->next->prev=NULL;
	tail->next=NULL;
}
void deleteAtStart(node* &head){
	head=head->next;
	head->prev->next=NULL;
	head->prev=NULL;
}
//display
void show(node* &head){
	node* temp=head;
	while(temp->next!=NULL){
		cout << temp->val << "->";
		temp=temp->next;
	}
	cout << temp->val << endl;
}
int main(){
	node* head;
	node* tail;
	insertAtEnd(head,tail,1);
	insertAtEnd(head,tail,2);
	insertAtEnd(head,tail,3);
	show(head);
	insertAtStart(head,tail,4);
	show(head);
	cout << "deleting tail" << endl;
	deleteAtEnd(tail);
	show(head);
	cout << "deleting head" << endl;
	deleteAtStart(head);
	show(head);
	return 0;
}
