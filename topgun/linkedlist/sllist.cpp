#include<bits/stdc++.h>
using namespace std;
struct node{
	int val;
	node *next;
	node(int a){
		val=a;
		next=NULL;
	}
};
//print all node in linked list
void show(node* &head){
	node* temp=head;
	while(temp->next!=NULL){
		cout << temp->val <<"->";
		temp=temp->next;
	}
	cout << temp->val << endl;
}
//insertion operations
void insertAtStart(node* &head,int a){
	node* n=new node(a);
	if(head==NULL)
		head=n;
	else{
		n->next=head;
		head=n;
	}
}
void insertAtEnd(node* &head,int a){
	node* n=new node(a);
	node* temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=n;
}
//deletion operations
void deleteAtStart(node* &head){
	head=head->next;
}
void deleteNode(node* &head,int a){
	if(head->val==a)
		head=head->next;
	else{
		node* temp=head;
		while(temp->next->val!=a){
			temp=temp->next;
		}
		temp->next=temp->next->next;
	}
}
int main(){
	node *head;
	insertAtStart(head,1);
	insertAtStart(head,2);
	insertAtEnd(head,3);
	insertAtEnd(head,4);
	insertAtEnd(head,6);
	show(head);
	deleteNode(head,2);
	show(head);
	deleteAtStart(head);
	show(head);
	return 0;
}
